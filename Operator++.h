#pragma once
#include <iostream>

using namespace std;

class OperatorPlusPlus
{
public:

	OperatorPlusPlus& operator++();

	OperatorPlusPlus operator++(int);

	OperatorPlusPlus& operator--();

	OperatorPlusPlus operator--(int);

public:

	int m_a;

};