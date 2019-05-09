#include "cManager.h"

int cManager::random()
{
	return static_cast<int>(static_cast<double> (rand()) / (RAND_MAX + 1) * 6.0f + 1);
}

void cManager::diceMove(cPlayer& firstPName, int playerPos, int dice) {
	int movedPosition = playerPos + dice;
	cout << firstPName.getPlayerName() << " Rolls " << dice << endl;

	if (movedPosition >= 26) {
		cout << firstPName.getPlayerName() << " passes Go and collects " << char(156) << "200" << endl;
		firstPName.setPlayerBalance(firstPName.getPlayerBalance() + 200);
		movedPosition = movedPosition - 26;
	}
	firstPName.setPlayerPosition(movedPosition);
}

cManager::cManager(vector<cSquare*> &vSquareVector)
{
	cPlayer Player1("Dog", 1500, 0);
	cPlayer Player2("Car", 1500, 0);
	vector<cSquare*> vOwnedProperties;
	for (int i = 0; i < 20; i++) {

		int turn[20];
		if (i % 2 == 0) {
			diceMove(Player1, turn[i], Player1.getPlayerPosition());
			location(Player1.getPlayerPosition(), Player1, Player2, vSquareVector);
			checkPlayerBalance(Player1);
		}
		else {
			diceMove(Player2, turn[i], Player2.getPlayerPosition());
			location(Player2.getPlayerPosition(), Player2, Player1, vSquareVector);
			checkPlayerBalance(Player2);
		}
	}
}

void cManager::readFile(vector<cSquare*> &vSquareVector) {
	ifstream inputFile;
	int i;
	inputFile.open("Monopoly.txt");
	if (inputFile.is_open()) {
		while (!inputFile.eof()) {
			for (i = 0; i < 26; i++) {
				getline(inputFile, arr[i], '\n');
			}
		}
	}
	else
	{
		cout << "No Monopoly.txt found!" << endl;
		system("pause");
	}

	for (int i = 0; i < 26; i++) {
		if ((arr[i])[0] == '1') {
			stringstream ss(arr[i]);

			getline(ss, codeNo, ' ');
			getline(ss, colour, ' ');
			getline(ss, type, ' ');
			getline(ss, cost, ' ');
			getline(ss, rent, ' ');
			getline(ss, group, ' ');
			intCode = stoi(codeNo);
			intCost = stoi(cost);
			intRent = stoi(rent);
			intGroup = stoi(group);
			vSquareVector.push_back(new cProperty(intCode, colour, type, intCost, intRent, intGroup));
		}
		else if ((arr[i])[0] == '2') {
			stringstream ss(arr[i]);

			getline(ss, codeNo, ' ');
			getline(ss, propertyName, ' ');
			intCode = stoi(codeNo);
			
			vSquareVector.push_back(new cGo(intCode,propertyName));
		}
		else if ((arr[i])[0] == '3') {
			stringstream ss(arr[i]);

			getline(ss, codeNo, ' ');
			getline(ss, type, ' ');
			getline(ss, propertyName, ' ');
			intCode = stoi(codeNo);

			vSquareVector.push_back(new cAirport(intCode, type, propertyName));

		}
		else if ((arr[i])[0] == '4') {
			stringstream ss(arr[i]);
			getline(ss, codeNo, ' ');
			getline(ss, type, ' ');
			intCode = stoi(codeNo);

			vSquareVector.push_back(new cBonus(intCode, type));
		}
		else if ((arr[i])[0] == '5') {
			stringstream ss(arr[i]);
			getline(ss, codeNo, ' ');
			getline(ss, type, ' ');
			intCode = stoi(codeNo);

			vSquareVector.push_back(new cPenalty(intCode, type));
		}
		else if ((arr[i])[0] == '6') {
			stringstream ss(arr[i]);
			getline(ss, codeNo, ' ');
			getline(ss, type, ' ');
			intCode = stoi(codeNo);

			vSquareVector.push_back(new cJail(intCode, type));
		}
		else if ((arr[i])[0]=='7') {
			stringstream ss(arr[i]);
			getline(ss, codeNo, ' ');
			getline(ss, colour, ' ');
			getline(ss, type, ' ');
			getline(ss, propertyName, ' ');

			intCode = stoi(codeNo);
			vSquareVector.push_back(new cGoToJail(intCode, colour, type, propertyName));
		}
		else if ((arr[i])[0] == '8') {
			stringstream ss(arr[i]);
			getline(ss, codeNo, ' ');
			getline(ss, type, ' ');
			getline(ss, propertyName, ' ');

			intCode = stoi(codeNo);
			vSquareVector.push_back(new cFreeParking(intCode,type, propertyName));
		}
		else {
			cout << "Code does not exist" << endl;
		}
	}

	inputFile.close();
}

//Setting the seed to srand
int cManager::storeSeed() {
	ifstream seedFile;
	seedFile.open("seed.txt");
	string stringSeed;
	int seed;
	if (!seedFile.is_open()) {
		cout << "Cannot open file" << endl;
	}
	seedFile >> stringSeed;
	seed = atoi(stringSeed.c_str());
	return seed;
}

void cManager::location(int pLocation, cPlayer& firstPName, cPlayer& secondPName, vector<cSquare*>&vSVector) {
	vSVector[pLocation]->play(firstPName, secondPName);
}


void cManager::checkPlayerBalance(cPlayer& firstPName) {
	cProperty* property;
	if (firstPName.getPlayerBalance() < 0) {
		int loop = 0;
		while (firstPName.getPlayerBalance() < 0) {
			firstPName.setPlayerBalance(firstPName.getPlayerBalance());
			loop++;
		}
		cout << firstPName.getPlayerName() << " has " << char(156) << firstPName.getPlayerBalance() << endl;
	}	
	else if (firstPName.getPlayerBalance() > 0) {
		int loop = 0;
		while (firstPName.getPlayerBalance() > 0) {
			firstPName.setPlayerBalance(firstPName.getPlayerBalance());
			loop++;
		}
		cout << firstPName.getPlayerName() << " has " << char(156) << firstPName.getPlayerBalance() << endl;
	}
}


cManager::~cManager()
{
}
