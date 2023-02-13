#pragma once
#include <iostream>
#include <vector>
#include "Point.h"
#include "Player.h"
#include <fstream>
using namespace std;

class Model
{
	vector<vector<Point>> Board;
	vector <Player> playerManager;
	vector<Player>temp;
	int currentTurn;
	//friend class 
public:
	vector<vector<Point> >& getBoard();
	void setBoard(int);

	void setPlayerManager(vector<Player>);
	vector<Player>& getPlayerManager();

	void Settemp(vector<Player>);
	vector<Player>& Gettemp();

	void setCurentTurn();
	int& getCurentTurn();
};