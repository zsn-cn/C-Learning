#include "Test01.h"

Test01::Test01(): _a(10)
{
	cout << "Test01���޲ι��캯��" << endl;
}

Test01::Test01(int a): _a(a)
{
	cout << "Test01���вι��캯��" << endl;
	//this->_a = a;
}

Test01::Test01(const Test01& t): _a(t._a)
{
	cout << "Test01�Ŀ������캯��" << endl;
	//this->_a = t._a;
}

Test01& Test01::operator=(const Test01& t)
{
	cout << "Test01�ĸ�ֵ����" << endl;
	this->_a = t._a;
	return *this;
}

Test01::~Test01()
{
	//cout << "Test01����������" << endl;
}
