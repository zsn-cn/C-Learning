#include "Operator����.h"

ostream& operator<<(ostream& cout, Person& person)
{
	cout << person.get_name() << "���Ա�" << person.get_sex() << "������" << person.get_age() << "�ꡣ";
	return cout;
}
