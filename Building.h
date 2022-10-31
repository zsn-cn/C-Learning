#pragma once
#include <iostream>

using namespace std;

class Building
{

	friend void cpp_friend(Building& building);
	
public:
	
	Building();

	~Building();

public:

	string sitting_room;

private:

	string _bed_room;
};