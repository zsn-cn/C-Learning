#pragma once
#include <iostream>

using namespace std;

class Test01
{
public:

	Test01();

	Test01(int a);

	Test01(const Test01& t);

	Test01& operator = (const Test01& t);

	~Test01();

private:

	int _a;
};
