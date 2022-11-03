#pragma once
#include <iostream>

using namespace std;

class OperatorEqual
{
public:

	OperatorEqual();

public:

	OperatorEqual& operator=(OperatorEqual& op);

public:

	int m_a;
};