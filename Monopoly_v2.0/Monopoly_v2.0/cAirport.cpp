#include "cAirport.h"


string cAirport::getOwner() { return owner; }
void cAirport::setOwner(string inOwner) { owner = inOwner; }

void cAirport::play(cPlayer& firstPName, cPlayer& secondPName)
{
	cout << firstPName.getPlayerName() << " lands on Airport" << endl;

	if (this->getOwner() == "NULL") {
		firstPName.setPlayerBalance(firstPName.getPlayerBalance() - 200);
		cout << firstPName.getPlayerName() << " buys Airport for" << char(156) << "200" << endl;
		this->setOwner(firstPName.getPlayerName());
	}
	else if (this->getOwner() == firstPName.getPlayerName()){}// Owned then player nothing occurs
	else 
	{
		firstPName.setPlayerBalance(firstPName.getPlayerBalance() - 10);
		cout << firstPName.getPlayerName() << " pays " << char(156) << "10" << " of goods" << endl;
		secondPName.setPlayerBalance(secondPName.getPlayerBalance() + 10); //The other player recieves money
	}
}

cAirport::~cAirport(){}
