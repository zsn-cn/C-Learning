#pragma once
#include <iostream>

using namespace std;

class OperatorPlus
{
public:

	OperatorPlus();

	~OperatorPlus();

	OperatorPlus operator+(OperatorPlus& op);
	
	OperatorPlus operator+(int num);

public:

	int num1;

	int num2;
};