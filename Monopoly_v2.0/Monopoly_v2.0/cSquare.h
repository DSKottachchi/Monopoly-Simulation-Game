#pragma once
#include <iostream>
#include <string>
#include "cPlayer.h"
//Square Class Done

#include <vector>

using namespace std;

class cSquare
{
private:
	int codeNum;
	string squareName;

public:
	cSquare(int, string);
	virtual void play(cPlayer&, cPlayer&) = 0; //Base Behaviour (Abstract Class- Pure Virtual)
		//= default; //virtual destructor

	void setCodeNum(int);
	int getCodeNum();

	string getSquareName();
	string outputSquareName();
	void setSquareName(string);
	void setSquareName(string, string);
	void setSquareName(string, string, string);
	virtual ~cSquare();

};

