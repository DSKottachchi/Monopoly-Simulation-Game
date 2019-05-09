#include "cPlayer.h"


cPlayer::cPlayer(string inPlayerName, int inPlayerBalance, int inPlayerPosition){
	setPlayerName(inPlayerName);
	setPlayerBalance(inPlayerBalance);
	setPlayerPosition(inPlayerPosition);
}

void cPlayer::setPlayerName(string inPlayerName) {
	playerName = inPlayerName;
}

string cPlayer::getPlayerName() {
	return playerName;
}
//Destructor
//virtual cSquare::~cSquare(){}

void cPlayer::setPlayerBalance(int inPlayerBalance) {
	playerBalance = inPlayerBalance;
}

int cPlayer::getPlayerBalance() {
	return playerBalance;
}


void cPlayer::setPlayerPosition(int inPlayerPosition) {
	playerPosition = inPlayerPosition;
}

int cPlayer::getPlayerPosition() {
	return playerPosition;
}

void cPlayer::setPOwned(cSquare* cPropertyPosi) {
	vPOwned.push_back(cPropertyPosi);
}

cSquare* cPlayer::getProperty(int input) {
	return vPOwned[input];
}

int cPlayer::getPropertyAmount() {
	return vPOwned.size();
}

cPlayer::~cPlayer(){} //destructor
