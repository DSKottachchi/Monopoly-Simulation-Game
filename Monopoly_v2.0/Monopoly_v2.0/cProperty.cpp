#include "cProperty.h"

void cProperty::setPColour(int inPColour){
	pColour = inPColour;}

//virtual cSquare::cSquare()

void cProperty::play(cPlayer& firstPName, cPlayer& secondPName) {
	if (opponentSquare(secondPName) == true) {
		firstPName.setPlayerBalance(firstPName.getPlayerBalance() - this->getPRent());
		cout << firstPName.getPlayerName() << " pays rent " << char(156) << this->getPRent() << endl;
		secondPName.setPlayerBalance(secondPName.getPlayerBalance() + this->getPRent());
	}
	else if (opponentSquare(secondPName) == true) {}
	else {
		if (firstPName.getPlayerBalance() > this->getPCost()) {
			firstPName.setPlayerBalance(firstPName.getPlayerBalance() - this->getPCost());
			cout << firstPName.getPlayerName() << " buys" << this->getSquareName() << " for " << char(156) << this->getPCost() << endl;
			firstPName.setPOwned(this);
		}

	}
}

int cProperty::getPColour() {
	return pColour;
}

void cProperty::setPCost(int inPCost) {
	pCost = inPCost;
}

int cProperty::getPCost() {
	return pCost;
}

void cProperty::setPRent(int inPRent) {
	pRent = inPRent;
}
int cProperty::getPRent() {
	return pRent;
}

bool cProperty::currentPlayerSquare(cPlayer& firstPName) {
	for (int i = 0; i < firstPName.getPropertyAmount(); i++) {
		if (firstPName.getProperty(i) == this) {
			return true;
		}
	}
	return false;
}

//Destructor
//virtual cSquare::~cSquare(){}

bool cProperty::opponentSquare(cPlayer& secondPName) {
	for (int i = 0; i < secondPName.getPropertyAmount(); i++) {
		if (secondPName.getProperty(i) == this) {
			return true;
		}
	}
	return false;
}

cProperty::~cProperty()
{
}
