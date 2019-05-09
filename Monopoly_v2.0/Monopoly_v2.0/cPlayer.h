#pragma once
#include <iostream>
#include <string>
#include <vector>
//#include "cSquare.h"
using namespace std;

class cSquare;
class cPlayer
{

private:
	string playerName;
	int playerBalance;
	int playerPosition;
	vector<cSquare*> vPOwned;
	cSquare* cPPosition;

public:
	cPlayer(string inPlayerName, int inPlayerBalance, int inPlayerPosition);
	// set name and get name
	void setPlayerName(string);
	string getPlayerName();

	//set balance and get balance
	void setPlayerBalance(int);
	int getPlayerBalance();

	//set position and get position
	void setPlayerPosition(int);
	int getPlayerPosition();

	void setPOwned(cSquare*);
	int getPropertyAmount();

	cSquare* getProperty(int);
	

	virtual ~cPlayer();
};

