#pragma once
#include "cSquare.h"
class cJail : public cSquare
{
public:
	cJail(int codeNum, string firstName) :cSquare(codeNum, firstName){}
	virtual void play(cPlayer&, cPlayer&);
	virtual ~cJail();
};

