#include "Operator=.h"

OperatorEqual::OperatorEqual()
{
	this->m_a = 100;
}

OperatorEqual& OperatorEqual::operator=(OperatorEqual& op)
{
	this->m_a = op.m_a;

	return *this;
}
