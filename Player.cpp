#include "Player.h"

Player::Player(string name, int age, deque<double> deq)
{
	this->_name = name;

	this->_age = age;

	this->_deq = deq;
}

Player::Player(const Player& p)
{
	this->_name = p._name;

	this->_age = p._age;

	this->_deq = p._deq;
}

Player::~Player()
{
	;
}

double Player::get_avg_score()
{
	deque<double> deq = this->_deq;

	sort(deq.begin(), deq.end());

	deq.pop_front();
	deq.pop_back();

	double count = 0;

	for (deque<double>::iterator it = deq.begin(); it != deq.end(); it++)
	{
		count += (*it);
	}

	return count / deq.size();
}

string Player::get_player_name()
{
	return this->_name;
}
