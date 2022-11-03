#pragma once
#include <iostream>

using namespace std;

class OperatorFunc
{
public:

	OperatorFunc(int num1, int num2);

public:

	int operator()();

public:

	int m_num1;

	int m_num2;
};