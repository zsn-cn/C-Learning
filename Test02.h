#pragma once
#include <iostream>
#include "Test01.h"

using namespace std;

class Test02
{
public:

	Test02();

	Test02(const Test01& t);

	Test02(const Test02& t);

	~Test02();

private:

	Test01 _t;
};