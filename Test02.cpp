#include "Test02.h"

Test02::Test02()
{
	cout << "Test02���޲ι��캯��" << endl;
}

Test02::Test02(const Test01& t): _t(t)
{
	cout << "Test02���вι��캯��" << endl;
	//this->_t = t;
}

Test02::Test02(const Test02& t): _t(t._t)
{
	cout << "Test02�Ŀ������캯��" << endl;
	//this->_t = t._t;
}

Test02::~Test02()
{
	//cout << "Test02����������" << endl;
}
