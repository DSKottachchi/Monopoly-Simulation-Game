#include <iostream>
#include <vector>
#include "cManager.h"
#include "cSquare.h"
vector <cSquare*> vSVect;
using namespace std;

int main() {
	cManager::cManager(vSVect);
	//Dice::new Random();

	//Board* board = new Board();
	//board->readFile();

	//for (int i = 0; i < 10; i++) {
	//	//board->playGame();
	//	//Player* player = new Player();
	//	//player->getBalance();
	//	//int balance = player->getBalance();
	//	//int newbal = board->moveSquares(balance);
	//	//cout << "Balance: " << newbal;
	//}

	system("pause");
}