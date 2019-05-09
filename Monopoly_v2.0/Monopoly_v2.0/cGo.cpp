#include "cGo.h"


void cGo::play(cPlayer& firstPName, cPlayer& secondPName) {
	cout << "<" << firstPName.getPlayerName() << " lands on " << this->outputSquareName() << endl;
}

cGo::~cGo(){}
