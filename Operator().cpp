#include "Operator().h"

OperatorFunc::OperatorFunc(int num1, int num2)
{
	this->m_num1 = num1;

	this->m_num2 = num2;
}

int OperatorFunc::operator()()
{
	return this->m_num1 + this->m_num2;
}
