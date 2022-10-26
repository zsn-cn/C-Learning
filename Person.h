#pragma once

#include <iostream>

using namespace std;

class Person
{
public:

	Person();

	Person(string name, int age, string sex);

	Person(const Person& per);

	~Person();

	string get_name();

	void set_name(string name);

	int get_age();

	void set_age(int age);

	string get_sex();

	void set_sex(string sex);

private:
	
	string _name;

	int _age;

	string _sex;

};
