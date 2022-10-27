#include "Test01.h"

Test01::Test01(): _a(10)
{
	cout << "Test01的无参构造函数" << endl;
}

Test01::Test01(int a): _a(a)
{
	cout << "Test01的有参构造函数" << endl;
	//this->_a = a;
}

Test01::Test01(const Test01& t): _a(t._a)
{
	cout << "Test01的拷贝构造函数" << endl;
	//this->_a = t._a;
}

Test01& Test01::operator=(const Test01& t)
{
	cout << "Test01的赋值运算" << endl;
	this->_a = t._a;
	return *this;
}

Test01::~Test01()
{
	//cout << "Test01的析构函数" << endl;
}
