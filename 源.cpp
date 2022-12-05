#ifndef DEBUG
#include <iostream>
#include "Person.h"
#include "OtherFunc.h"
#include "Test01.h"
#include "Test02.h"
#include "Test03.h"
#include "Building.h"
#include "Operator+.h"
#include "Operator×óÒÆ.h"
#include "Computer.h"
#include "Operator++.h"
#include "Operator=.h"
#include "Operator==.h"
#include "Operator().h"
#endif // DEBUG
#include <typeinfo>
#include "MyArray.hpp"

using namespace std;

//int Test03::t_a = 100;

void cpp_friend(Building& building);

int main()
{
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

	//cpp_pointer();

	/*Test01 t01;

	Test02 t02(t01);*/

	/*Test03 t03;

	cout << t03.t_a << endl;*/

	/*Building building;

	cpp_friend(building);*/

	/*OperatorPlus op1;
	OperatorPlus op2;

	OperatorPlus op3 = op1.operator+(op2);
	OperatorPlus op3 = op1 + op2;

	OperatorPlus op3 = op1 + 5;

	cout << "op3µÄnum1 = " << op3.num1 << " num2 = " << op3.num2 << endl;*/

	/*Person person("ÕÅÚ¡Äþ", 23, "ÄÐ");

	cout << person << endl;*/

	/*CPU* cpu = new IntelCPU;
	GPU* gpu = new AMDGPU;
	RAM* ram = new IntelRAM;

	Computer computer(cpu, gpu, ram);

	computer.run_computer();*/

	/*OperatorPlusPlus op1;
	op1.m_a = 10;*/

	//op1.operator++();
	//cout << ++(++op1) << endl;
	//cout << op1.m_a << endl;

	/*cout << op1++ << endl;
	cout << op1.m_a << endl;*/

	/*OperatorPlusPlus op2;
	op2.m_a = 10;*/

	/*cout << --(--op2) << endl;
	cout << op2 << endl;*/

	/*cout << op2-- << endl;
	cout << op2 << endl;*/

	/*OperatorEqual op1;
	OperatorEqual op2;
	OperatorEqual op3;

	op1.m_a = 500;
	op3 = op2 = op1;

	cout << op2.m_a << endl;
	cout << op3.m_a << endl;*/

	/*OperatorIsEqual op1;
	OperatorIsEqual op2;
	op1.m_a = 10000;

	cout << (op1 == op2) << endl;*/

	/*OperatorFunc op1(10, 20);

	cout << op1.operator()() << endl;*/

	//cout << OperatorFunc(20, 30)() << endl;

	/*MyArray<int> arr1(5);

	cout << "arr1.capacity = " << arr1.get_capacity() << endl;
	cout << "arr1.size = " << arr1.get_size() << endl;

	for (int i = 0; i < arr1.get_capacity(); i++)
	{
		arr1.push_element(i);
	}

	for (int i = 0; i < arr1.get_size(); i++)
	{
		cout << arr1[i] << endl;
	}

	cout << "arr1.capacity = " << arr1.get_capacity() << endl;
	cout << "arr1.size = " << arr1.get_size() << endl;

	arr1.pop_element();

	cout << "arr1.capacity = " << arr1.get_capacity() << endl;
	cout << "arr1.size = " << arr1.get_size() << endl;

	MyArray<int> arr2(arr1);

	for (int i = 0; i < arr2.get_size(); i++)
	{
		cout << arr2[i] << endl;
	}

	cout << "arr2.capacity = " << arr2.get_capacity() << endl;
	cout << "arr2.size = " << arr2.get_size() << endl;

	MyArray<int> arr3(10);

	for (int i = 0; i < arr3.get_capacity(); i++)
	{
		arr3.push_element(i);
	}

	arr1 = arr2 = arr3;

	for (int i = 0; i < arr1.get_size(); i++)
	{
		cout << arr1[i] << endl;
	}

	for (int i = 0; i < arr2.get_size(); i++)
	{
		cout << arr2[i] << endl;
	}*/


	//1 string();
	//2 string(const char* s);
	//3 string(const string& str);
	//4 string(int n, char c);
	/*const char* str1 = "hello world";

	string str2(str1);

	string str3("hello world");

	string str4(str3);

	string str5(5, 'a');

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
	cout << str5 << endl;*/

	/*string str1 = "123456789";

	char c = str1.at(0);

	c = 'a';

	cout << str1 << endl;*/

	/*char c = 'a';

	char& c1 = c;

	c1 = 'b';

	cout << c << endl;*/

	/*string str1 = "123456789";
	
	string str2 = str1.substr(0, 3);

	str2[0] = 'a';

	cout << str2 << endl;*/

	/*const string get_substring(string& str, int pos = 0, int n = 1);

	string str1 = "123456789";

	string str2 = get_substring(str1, 0, 3);

	str2[0] = 'a';

	cout << str2 << endl;*/
	

	return 0;
}

void cpp_friend(Building& building)
{
	cout << "·ÃÎÊ" << building.sitting_room << endl;

	cout << "·ÃÎÊ" << building._bed_room << endl;
}

const string get_substring(string& str, int pos = 0, int n = 1)
{
	string str1;

	for (int i = pos; i < n; i++)
	{
		str1 += str[i];
	}

	return str1;
}