#include <iostream>
#include "Person.h"
#include "OtherFunc.h"
#include "Test01.h"
#include "Test02.h"
#include "Test03.h"

using namespace std;

//int Test03::t_a = 100;

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

	Test03 t03;

	cout << t03.t_a << endl;

	return 0;
}