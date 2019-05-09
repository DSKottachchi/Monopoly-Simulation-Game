#include "cSquare.h"

//cSquare::cSquare(int codeNumber, string squareN)
//{
//	codeNum = codeNumber;
//	squareName = squareN;
//}

cSquare::cSquare(int codeNum, string squareName): codeNum(codeNum), squareName(squareName){}

string cSquare::getSquareName() {
	return squareName;
}

void cSquare::setSquareName(string firstName) {
	squareName = firstName;
}

//Destructor
//virtual cSquare::~cSquare(){}

void cSquare::setSquareName(string firstName,string secondName) {
	squareName = firstName + " " + " " + secondName;
}

void cSquare::setSquareName(string firstName, string secondName, string thirdName) {
	squareName = firstName + " " + secondName + " " + thirdName;
}

void cSquare::setCodeNum(int cNum) {
	codeNum = cNum;
}

int cSquare::getCodeNum() {
	return codeNum;
}

string cSquare::outputSquareName() {
	return this->getSquareName();
}


cSquare::~cSquare(){}