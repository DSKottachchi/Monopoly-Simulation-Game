#pragma once
#include "cSquare.h"

class cProperty : public cSquare
{
private: 
	int pCost;
	int pRent;
	int pColour;	
public:
	cProperty(int codeNum, string firstName, string secondName, int pCost, int pRent, int pColour) :cSquare(codeNum, firstName) {
		setPCost(pCost);
	}

	virtual void play(cPlayer&, cPlayer&);
	void setPCost(int);
	void setPColour(int);
	void setPRent(int);
	bool opponentSquare(cPlayer&);
	bool currentPlayerSquare(cPlayer&);
	int getPCost();
	int getPRent();
	int getPColour();
	
	virtual ~cProperty();
};

