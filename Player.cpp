#include"Player.h"
Player::Player()
{
    name = "";
    winMatch = drawMatch = loseMatch = 0;
    totalMatch = winMatch + drawMatch + loseMatch;
}

void Player::setName(const string& name)
{
    this->name = name;
}

string Player::getName()
{
    return name;
}

void Player::setWinMatch(int winMatch)
{
    this->winMatch = winMatch;
    totalMatch = winMatch + drawMatch + loseMatch;
}

int Player::getWinMatch()
{
    return winMatch;
}

void Player::setDrawMatch(int drawMatch)
{
    this->drawMatch = drawMatch;
    totalMatch = winMatch + drawMatch + loseMatch;
}

int Player::getDrawMatch()
{
    return drawMatch;
}

void Player::setLoseMatch(int loseMatch)
{
    this->loseMatch = loseMatch;
    totalMatch = winMatch + drawMatch + loseMatch;
}

int Player::getLoseMatch()
{
    return loseMatch;
}

int Player::getTotalMatch()
{
    return totalMatch;
}
void Player::ExportInfor(ofstream& ofs)
{
    ofs << this->getName() << " " << this->getWinMatch() << " " << this->getLoseMatch() << " " << this->getDrawMatch() << endl;
}
float Player::winRate()
{
    return float(winMatch) / float(totalMatch);
}

void Player::showInfo()
{
}

Player::~Player()
{
}