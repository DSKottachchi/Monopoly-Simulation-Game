#pragma once
#include "cSquare.h"
class cBonus : public cSquare
{
public:
	cBonus(int codeNum, string firstName) :cSquare(codeNum, firstName){}
	virtual void play(cPlayer&, cPlayer&);
	virtual ~cBonus();
};

