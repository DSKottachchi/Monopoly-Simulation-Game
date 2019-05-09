#include "cPenalty.h"


void cPenalty::play(cPlayer& firstPName, cPlayer& secondPName) {
	cout << firstPName.getPlayerName() << " lands on Penalty" << endl;
	int random = rand() % 6; 

	switch (random) {
	case 0:
		cout << firstPName.getPlayerName() << " Food bill. Player Loses " << char(156) << "20" << endl;
		firstPName.setPlayerBalance(firstPName.getPlayerBalance() - 20);
	case 1:
		cout << firstPName.getPlayerName() << " Phone bill. Player Loses" << char(156) << "50" << endl;
		firstPName.setPlayerBalance(firstPName.getPlayerBalance() - 50);
	case 2:
		cout << firstPName.getPlayerName() << " Heating Bill. Player Loses " << char(156) << "100" << endl;
		firstPName.setPlayerBalance(firstPName.getPlayerBalance() - 100);
	case 3:
		cout << firstPName.getPlayerName() << " Vehicle bill. Player Loses " << char(156) << "150" << endl;
		firstPName.setPlayerBalance(firstPName.getPlayerBalance() - 150);
	case 4:
		cout << firstPName.getPlayerName() << " Fuel bill. Player Loses " << char(156) << "200" << endl;
		firstPName.setPlayerBalance(firstPName.getPlayerBalance() - 200);
	case 5:
		cout << firstPName.getPlayerName() << " Windfall Tax. Player Loses " << char(156) << "300" << endl;
		firstPName.setPlayerBalance(firstPName.getPlayerBalance() - 300);
	}	
}

cPenalty::~cPenalty(){}
