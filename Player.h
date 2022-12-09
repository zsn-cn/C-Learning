#pragma once
#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

class Player
{
public:

	Player(string name, int age, deque<double> deq = deque<double>(10, 0.0));

	Player(const Player& p);

	~Player();

	double get_avg_score();

	string get_player_name();

public:

	deque<double> _deq;

private:

	string _name;

	int _age;

};

