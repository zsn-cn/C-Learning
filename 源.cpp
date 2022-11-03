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

	return 0;
}

void cpp_friend(Building& building)
{
	cout << "·ÃÎÊ" << building.sitting_room << endl;

	cout << "·ÃÎÊ" << building._bed_room << endl;
}