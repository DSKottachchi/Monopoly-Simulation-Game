#pragma once
#include "cSquare.h"
class cPenalty :
	public cSquare
{
public:
	cPenalty(int codeNum, string firstName): cSquare(codeNum, firstName){}
	virtual void play(cPlayer&, cPlayer&);
	virtual ~cPenalty();
};

