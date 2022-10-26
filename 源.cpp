#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
	void escape_character();
	void cpp_string();
	void cpp_bool();
	int* func();
	void cpp_new();
	int& cpp_ref();
	void cpp_ref2();
	void cpp_copy(Person per);
	Person cpp_copy2();
	void cpp_pointer();

	//escape_character();
	//cpp_string();
	//cpp_bool();
	//cpp_new();
	/*int& ref_a = cpp_ref();

	ref_a = 100;

	int& ref_b = cpp_ref();*/
	//cpp_ref2();

	/*Person per;

	cout << per.get_name() << endl;
	cout << per.get_age() << endl;
	cout << per.get_sex() << endl;*/

	//system("pause");

	/*Person per1;

	Person per2(per1);

	cout << per2.get_name() << endl;
	cout << per2.get_age() << endl;
	cout << per2.get_sex() << endl;

	cpp_copy(per1);

	Person per = cpp_copy2();*/

	cpp_pointer();

	return 0;
}

void escape_character()
{
	cout << "\t" << "aaaa" << endl;
	cout << "        " << "aaaa" << endl;

	cout << "bbbbbbbbb" << "\t" << "aaaa" << endl;
	cout << "bbbbbbbbbb" << "\t" << "aaaa" << endl;
}

void cpp_string()
{
	char str[] = "";

	string str1 = "abcdef";

	cout << str << endl;
	cout << str1 << endl;
}

void cpp_bool()
{
	cout << true << endl;

	cout << false << endl;

	cout << (bool)-1 << endl;
}

int* func()
{
	int* p = new int;
	return p;
}

void cpp_new()
{
	int* p = func();
	*p = 10;
	cout << *p << endl;
	delete p;
}

int& cpp_ref()
{
	static int a;

	cout << a + 10 << endl;

	return a;
}

void cpp_ref2()
{
	int a = 10;

	int* const ptr_a = &a;

	cout << (int)&a << endl;

	int& ref_a = a;

	cout << (int)&ref_a << endl;
	// ref_a = *ptr_a = a
	// &ref_a = &(*ptr_a) = &a
	cout << ref_a << endl;
}

void cpp_copy(Person per)
{
	;
}

Person cpp_copy2()
{
	Person per;

	return per;
}

void cpp_pointer()
{
	int* p1 = new int(10);

	int* p2 = p1;

	cout << (int)p1 << endl;

	cout << (int)p2 << endl;

	delete p1;

	p1 = nullptr;

	p2 = nullptr;
}