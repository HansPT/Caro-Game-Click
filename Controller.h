#pragma once
#include "View.h"
#include "Model.h"

class Controller {
private:
	Model model;
	View view;
public:
	void run();
	void Click(int, int, char&);
	int checkResult(const int&, const int&, const unsigned char&);
	void inToGame(shared_ptr<Player>, shared_ptr<Player>);
	//void ShowRePlay();
	//void exportFile();
	//void showData();
	//void removeFile();
	//void import();
	void update(vector<Player>&);
};