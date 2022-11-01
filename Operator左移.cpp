#include "Operator左移.h"

ostream& operator<<(ostream& cout, Person& person)
{
	cout << person.get_name() << "，性别" << person.get_sex() << "，今年" << person.get_age() << "岁。";
	return cout;
}
