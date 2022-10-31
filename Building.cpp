#include "Building.h"

Building::Building()
{
	this->sitting_room = "客厅";

	this->_bed_room = "卧室";
}

Building::~Building()
{
	cout << "Building的析构函数" << endl;
}
