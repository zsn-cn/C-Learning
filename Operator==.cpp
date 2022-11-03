#include "Operator==.h"

OperatorIsEqual::OperatorIsEqual()
{
	this->m_a = 10;
}

bool OperatorIsEqual::operator==(OperatorIsEqual& op)
{
	if (this->m_a == op.m_a)
	{
		return true;
	}
	else
	{
		return false;
	}
}
