#pragma once
#include "cSquare.h"
class cFreeParking :public cSquare
{
private:
	int fee;
public:
	virtual void play(cPlayer&, cPlayer&);
	void setFee(int);
	int getFee();
	cFreeParking(int codeNum, string firstName, string secondName) :cSquare(codeNum, firstName) {
		setSquareName(firstName, secondName);
	}

	virtual ~cFreeParking();
};

