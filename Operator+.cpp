#include "Operator+.h"

Operator::Operator()
{
	this->num1 = 10;

	this->num2 = 10;
}

Operator::~Operator()
{
	;
}

Operator Operator::operator+(Operator& op)
{
	Operator temp;
	temp.num1 = this->num1 + op.num1;
	temp.num2 = this->num2 + op.num2;
	return temp;
}

Operator Operator::operator+(int num)
{
	Operator temp;
	temp.num1 = this->num1 + num;
	temp.num2 = this->num2 + num;
	return temp;
}
