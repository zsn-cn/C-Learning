/*
* 创建一个数组类模板实现以下功能：
* 1、可以存放内置数据类型和自定义数据类型
* 2、创建数组时可以指定数组容量
* 3、数组元素存储在堆区
* 4、重写拷贝构造函数并重载赋值运算符解决浅拷贝问题
* 5、可以使用下标进行数组元素访问
* 6、实现尾插法和尾删法
* 7、可以获得数组大小和数组容量
*/

#pragma once
#include <iostream>
using namespace std;

template <typename MemberType>
class MyArray
{
public:

	//有参构造
	MyArray(int capacity);

	//拷贝构造
	MyArray(const MyArray<MemberType>& arr);

	//析构
	~MyArray();

	//重载赋值运算符
	MyArray<MemberType>& operator=(const MyArray<MemberType>& arr);

	//使用下标进行元素访问
	MemberType operator[](int index);

	//尾插法
	void push_element(const MemberType& new_element);

	//尾删法
	void pop_element();

	//返回数组容量
	int get_capacity();

	//返回数组大小
	int get_size();

private:

	MemberType* arr_ptr;

	int arr_capacity;

	int arr_size;
};

template<typename MemberType>
MyArray<MemberType>::MyArray(int capacity)
{
	this->arr_capacity = capacity;
	this->arr_size = 0;
	this->arr_ptr = new MemberType[capacity];
}

template<typename MemberType>
MyArray<MemberType>::MyArray(const MyArray<MemberType>& arr)
{
	if (this->arr_ptr != nullptr)
	{
		delete[] this->arr_ptr;
		this->arr_ptr = nullptr;
	}

	this->arr_capacity = arr.arr_capacity;
	this->arr_size = arr.arr_size;
	this->arr_ptr = new MemberType[this->arr_capacity];
	for (int i = 0; i < this->arr_size; i++)
	{
		this->arr_ptr[i] = arr.arr_ptr[i];
	}
}

template<typename MemberType>
MyArray<MemberType>::~MyArray()
{
	if (this->arr_ptr != nullptr)
	{
		delete[] this->arr_ptr;
		this->arr_ptr = nullptr;
	}
}

template<typename MemberType>
MyArray<MemberType>& MyArray<MemberType>::operator=(const MyArray<MemberType>& arr)
{
	if (this->arr_ptr != nullptr)
	{
		delete[] this->arr_ptr;
		this->arr_ptr = nullptr;
	}

	this->arr_capacity = arr.arr_capacity;
	this->arr_size = arr.arr_size;
	this->arr_ptr = new MemberType[this->arr_capacity];
	for (int i = 0; i < this->arr_size; i++)
	{
		this->arr_ptr[i] = arr.arr_ptr[i];
	}

	return *this;
}

template<typename MemberType>
MemberType MyArray<MemberType>::operator[](int index)
{
	if (index >= 0 && index < this->arr_size)
	{
		return this->arr_ptr[index];
	}
	else
	{
		cout << "index is out of range." << endl;
		return this->arr_ptr[0];
	}
}

template<typename MemberType>
void MyArray<MemberType>::push_element(const MemberType& new_element)
{
	if (this->arr_size < this->arr_capacity)
	{
		this->arr_ptr[this->arr_size] = new_element;
		this->arr_size++;
	}
	else
	{
		cout << "array if full." << endl;
	}
}

template<typename MemberType>
void MyArray<MemberType>::pop_element()
{
	if (this->arr_size != 0)
	{
		this->arr_size--;
	}
	else
	{
		cout << "array is empty." << endl;
	}
}

template<typename MemberType>
int MyArray<MemberType>::get_capacity()
{
	return this->arr_capacity;
}

template<typename MemberType>
int MyArray<MemberType>::get_size()
{
	return this->arr_size;
}
