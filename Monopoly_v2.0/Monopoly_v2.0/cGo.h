#pragma once
#include <string>
#include "cSquare.h"

class cGo :public cSquare //Overiding the pure virtual function in the derived class
{
public:
	cGo(int codeNum, string firstName) 
	   :cSquare(codeNum, firstName) {}
	 
	virtual void play(cPlayer&, cPlayer&);

	virtual ~cGo();
};

