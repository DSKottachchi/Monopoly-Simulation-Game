#pragma once
#include "cSquare.h"
class cAirport:public cSquare
{
private:
	string owner = "NULL";
public:
	cAirport(int codeNum, string firstName, string secondName) :cSquare(codeNum, firstName) {
		setSquareName(firstName, secondName); 
	}
	virtual void play(cPlayer&, cPlayer&);
	void setOwner(string);
	string getOwner();

	virtual ~cAirport();
};

