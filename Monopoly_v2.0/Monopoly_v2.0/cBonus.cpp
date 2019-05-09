#include "cBonus.h"


void cBonus::play(cPlayer& firstPName, cPlayer& secondPName)
{
	cout << firstPName.getPlayerName() << " lands on Bonus" << endl;
	int random = rand() % 6; 

	switch (random) {
	case 0:
		cout << firstPName.getPlayerName() << " Finds Some Money. Player Gains " << char(156) << "20" << endl;
		firstPName.setPlayerBalance(firstPName.getPlayerBalance() + 20);
	case 1:
		cout << firstPName.getPlayerName() << " Win Competition. Player Gains " << char(156) << "50" << endl;
		firstPName.setPlayerBalance(firstPName.getPlayerBalance() + 50);
	case 2:
		cout << firstPName.getPlayerName() << " Tax Rebate. Player Gains " << char(156) << "100" << endl;
		firstPName.setPlayerBalance(firstPName.getPlayerBalance() + 100);
	case 3:
		cout << firstPName.getPlayerName() << " Wins Lottery. Player Gains " << char(156) << "150" << endl;
		firstPName.setPlayerBalance(firstPName.getPlayerBalance() + 150);
	case 4:
		cout << firstPName.getPlayerName() << " Bequest. Player Gains " << char(156) << "200" << endl;
		firstPName.setPlayerBalance(firstPName.getPlayerBalance() + 200);
	case 5:
		cout << firstPName.getPlayerName() << " Birthday. Player Gains " << char(156) << "300" << endl;
		firstPName.setPlayerBalance(firstPName.getPlayerBalance() + 300);
	}

}


cBonus::~cBonus(){}
