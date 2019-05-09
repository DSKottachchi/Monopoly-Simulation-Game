#pragma once
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include "cSquare.h"
#include "cPlayer.h"
#include "cGo.h"
#include "cGoToJail.h"
#include "cProperty.h"
#include "cAirport.h"
#include "cBonus.h"
#include "cPenalty.h"
#include "cJail.h"
#include "cFreeParking.h"

using namespace std;
class cManager
{
private:
	string line;
	string codeNo, colour, type, cost, rent, group, propertyName;
	string arr[26];
	int intCode, intRent, intCost, intGroup;

public:
	cManager(vector<cSquare*> &vSquareVector);
	void diceMove(cPlayer&, int, int);
	void location(int pLocation, cPlayer& firstPName, cPlayer& secondPName, vector<cSquare*>&);
	void readFile(vector<cSquare*> &vSquareVector);
	int random();
	int storeSeed();
	void checkPlayerBalance(cPlayer&);

	virtual ~cManager();
};

