/*
* ����һ��������ģ��ʵ�����¹��ܣ�
* 1�����Դ�������������ͺ��Զ�����������
* 2����������ʱ����ָ����������
* 3������Ԫ�ش洢�ڶ���
* 4����д�������캯�������ظ�ֵ��������ǳ��������
* 5������ʹ���±��������Ԫ�ط���
* 6��ʵ��β�巨��βɾ��
* 7�����Ի�������С����������
*/

#pragma once
#include <iostream>
using namespace std;

template <typename MemberType>
class MyArray
{
public:

	//�вι���
	MyArray(int capacity);

	//��������
	MyArray(const MyArray<MemberType>& arr);

	//����
	~MyArray();

	//���ظ�ֵ�����
	MyArray<MemberType>& operator=(const MyArray<MemberType>& arr);

	//ʹ���±����Ԫ�ط���
	MemberType operator[](int index);

	//β�巨
	void push_element(const MemberType& new_element);

	//βɾ��
	void pop_element();

	//������������
	int get_capacity();

	//���������С
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
