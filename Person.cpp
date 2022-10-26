#include "Person.h"

Person::Person()
{
	this->_name = "张三";

	this->_age = 18;

	this->_sex = "男";

	cout << "调用无参构造" << endl;
}

Person::Person(string name, int age, string sex)
{
	this->_name = name;

	this->_age = age;

	this->_sex = sex;

	cout << "调用有参构造" << endl;
}

Person::Person(const Person& per)
{
	this->_name = per._name;

	this->_age = per._age;

	this->_sex = per._sex;

	cout << "调用拷贝构造" << endl;
}

Person::~Person()
{
	cout << "释放对象" << endl;
}

string Person::get_name()
{
	return this->_name;
}

void Person::set_name(string name)
{
	this->_name = name;
}

int Person::get_age()
{
	return this->_age;
}

void Person::set_age(int age)
{
	if (age > 0 && age < 150)
	{
		this->_age = age;
	}
	else
	{
		cout << "设置非法年龄值" << endl;
	}
}

string Person::get_sex()
{
	return this->_sex;
}

void Person::set_sex(string sex)
{
	if (sex == "男" || sex == "女")
	{
		this->_sex = sex;
	}
	else
	{
		cout << "设置非法性别" << endl;
	}
}