#pragma once
class Point {
private:
	char check;
	int turn;
public:
	Point();
	void setCheck(char&);
	char& getCheck();

	void setTurn(int turn);
	int getTurn();
};