#include "Test02.h"

Test02::Test02()
{
	cout << "Test02的无参构造函数" << endl;
}

Test02::Test02(const Test01& t): _t(t)
{
	cout << "Test02的有参构造函数" << endl;
	//this->_t = t;
}

Test02::Test02(const Test02& t): _t(t._t)
{
	cout << "Test02的拷贝构造函数" << endl;
	//this->_t = t._t;
}

Test02::~Test02()
{
	//cout << "Test02的析构函数" << endl;
}
