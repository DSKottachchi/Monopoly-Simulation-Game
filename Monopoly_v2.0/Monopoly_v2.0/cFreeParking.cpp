#include "cFreeParking.h"

void cFreeParking::play(cPlayer& firstPName, cPlayer& secondPName) {
	cout << firstPName.getPlayerName() << " lands on Free Parking" << endl;
}

void cFreeParking::setFee(int inFee) {
	fee = inFee;
}

int cFreeParking::getFee() {
	return fee;
}
//Destructor
//virtual cSquare::~cSquare(){}
cFreeParking::~cFreeParking(){}
