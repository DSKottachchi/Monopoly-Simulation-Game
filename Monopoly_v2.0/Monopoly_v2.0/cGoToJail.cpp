#include "cGoToJail.h"

void cGoToJail::play(cPlayer& firstPName, cPlayer& secondPName) {
	cout << firstPName.getPlayerName() << " Lands on Go To Jail" << endl;

	cout << firstPName.getPlayerName() << " Goes To Jail" << endl;
	cout << firstPName.getPlayerName() << " Pays" << char(156) << "50" << endl;
}

cGoToJail::~cGoToJail(){} //destructor
//Destructor
//virtual cSquare::~cSquare(){}