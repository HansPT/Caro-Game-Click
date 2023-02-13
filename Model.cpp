#include"Model.h"
vector<vector<Point> >& Model::getBoard() {
	return Board;
}
void Model::setBoard(int tablesize) {
	for (int i = 0; i < tablesize; i++) {
		vector<Point> point;
		for (int i = 0; i < tablesize; i++) {
			Point p;
			//p.setCheck(' ');
			point.push_back(p);
		}
		Board.push_back(point);
	}
}

void Model::setPlayerManager(vector<Player> playermanager) {
	this->playerManager = playerManager;
}
vector<Player>& Model::getPlayerManager() {
	return this->playerManager;
}
void Model::Settemp(vector<Player>playermanager) {
	this->temp = playermanager;
}
vector<Player>& Model::Gettemp() {
	return this->temp;
}

void Model::setCurentTurn() {
	this->currentTurn++;
}
int& Model::getCurentTurn() {
	return currentTurn;
}