#pragma once
#include <iostream>

using namespace std;

class Operator
{
public:

	Operator();

	~Operator();

	Operator operator+(Operator& op);
	
	Operator operator+(int num);

public:

	int num1;

	int num2;
};