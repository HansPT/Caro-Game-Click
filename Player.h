#pragma once
#include <iostream>
#include<memory>
#include<fstream>
using namespace std;

class Player
{
private:
    string name;
    int winMatch;
    int loseMatch;
    int drawMatch;
    int totalMatch;
public:
    Player(/* args */);
    void setName(const string& name);
    string getName();

    void setWinMatch(int);
    int getWinMatch();

    void setDrawMatch(int);
    int getDrawMatch();

    void setLoseMatch(int);
    int getLoseMatch();

    int getTotalMatch();

    void ExportInfor(ofstream&);

    float winRate();
    void showInfo();
    ~Player();
};