#include "Person.h"

Person::Person()
{
	this->_name = "����";

	this->_age = 18;

	this->_sex = "��";

	cout << "�����޲ι���" << endl;
}

Person::Person(string name, int age, string sex)
{
	this->_name = name;

	this->_age = age;

	this->_sex = sex;

	cout << "�����вι���" << endl;
}

Person::Person(const Person& per)
{
	this->_name = per._name;

	this->_age = per._age;

	this->_sex = per._sex;

	cout << "���ÿ�������" << endl;
}

Person::~Person()
{
	cout << "�ͷŶ���" << endl;
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
		cout << "���÷Ƿ�����ֵ" << endl;
	}
}

string Person::get_sex()
{
	return this->_sex;
}

void Person::set_sex(string sex)
{
	if (sex == "��" || sex == "Ů")
	{
		this->_sex = sex;
	}
	else
	{
		cout << "���÷Ƿ��Ա�" << endl;
	}
}