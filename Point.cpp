#include "Point.h"

Point::Point() {
	check = ' ';
}
void Point::setCheck(char& check) {
	this->check = check;
}
char& Point::getCheck() {
	return check;
}
void Point::setTurn(int turn)
{
	this->turn = turn;
}
int Point::getTurn()
{
	return this->turn;
}