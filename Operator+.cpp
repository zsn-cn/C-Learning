#include "Operator+.h"

OperatorPlus::OperatorPlus()
{
	this->num1 = 10;

	this->num2 = 10;
}

OperatorPlus::~OperatorPlus()
{
	;
}

OperatorPlus OperatorPlus::operator+(OperatorPlus& op)
{
	OperatorPlus temp;
	temp.num1 = this->num1 + op.num1;
	temp.num2 = this->num2 + op.num2;
	return temp;
}

OperatorPlus OperatorPlus::operator+(int num)
{
	OperatorPlus temp;
	temp.num1 = this->num1 + num;
	temp.num2 = this->num2 + num;
	return temp;
}
