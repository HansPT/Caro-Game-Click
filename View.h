#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;

class View {
private:
	int tableSize;
	bool finish;
public:
	void Menu();
	void setFinish(const bool& finish);
	bool getFinish();

	void setTableSize(int size);
	int getTableSize();

	void showTableOnl();

	void showTable();
	void gotoXY(int, int);
	COORD checkClick();
};