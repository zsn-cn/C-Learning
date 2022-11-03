#include "Operator++.h"

OperatorPlusPlus& OperatorPlusPlus::operator++()
{
	this->m_a = this->m_a + 1;

	return *this;
}

OperatorPlusPlus OperatorPlusPlus::operator++(int)
{
	OperatorPlusPlus temp = *this;

	this->m_a = this->m_a + 1;

	return temp;
}

OperatorPlusPlus& OperatorPlusPlus::operator--()
{
	this->m_a = this->m_a - 1;

	return *this;
}

OperatorPlusPlus OperatorPlusPlus::operator--(int)
{
	OperatorPlusPlus temp = *this;

	this->m_a = this->m_a - 1;

	return temp;
}
