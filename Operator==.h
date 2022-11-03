#pragma once
#include <iostream>

using namespace std;

class OperatorIsEqual
{
public:

	OperatorIsEqual();

public:

	bool operator==(OperatorIsEqual& op);

public:

	int m_a;
};