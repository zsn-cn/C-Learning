#include "Operator����.h"

ostream& operator<<(ostream& cout, Person& person)
{
	cout << person.get_name() << "���Ա�" << person.get_sex() << "������" << person.get_age() << "�ꡣ";
	return cout;
}

ostream& operator<<(ostream& cout, OperatorPlusPlus op)
{
	cout << op.m_a;
	return cout;
}
