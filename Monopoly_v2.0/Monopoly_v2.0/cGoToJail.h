#pragma once
#include "cSquare.h"
class cGoToJail : public cSquare
{
public:
	virtual void play(cPlayer&, cPlayer&);
	cGoToJail(int codeNum, string firstName, string secondName, string thirdName) :cSquare(codeNum, firstName) {
		setSquareName(firstName, secondName, thirdName);
	}

	virtual ~cGoToJail();
};

