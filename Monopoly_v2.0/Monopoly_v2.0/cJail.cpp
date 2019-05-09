#include "cJail.h"

void cJail::play(cPlayer& firstPName, cPlayer& secondPName) {
	cout << firstPName.getPlayerName() << " Lands on Jail" << endl;
	cout << firstPName.getPlayerName() << " Is Just Visiting" << endl;
}

cJail::~cJail(){}
