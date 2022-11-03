#pragma once
#include <iostream>
#include "Person.h"
#include "Operator++.h"

using namespace std;

ostream& operator<<(ostream& cout, Person& person);

ostream& operator<<(ostream& cout, OperatorPlusPlus op);