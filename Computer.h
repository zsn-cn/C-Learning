#pragma once
#include <iostream>

using namespace std;

class CPU
{
public:

	virtual void single_calculate() = 0;
};

class GPU
{
public:

	virtual void multi_calculate() = 0;
};

class RAM
{
public:

	virtual void storage() = 0;
};

class IntelCPU : public CPU
{
public:

	void single_calculate();
};

class AMDCPU : public CPU
{
public:

	void single_calculate();
};

class IntelGPU : public GPU
{
public:

	void multi_calculate();
};

class AMDGPU : public GPU
{
public:

	void multi_calculate();
};

class IntelRAM : public RAM
{
public:

	void storage();
};

class AMDRAM : public RAM
{
public:

	void storage();
};

class Computer
{
public:

	Computer(CPU* cpu, GPU* gpu, RAM* ram);

	~Computer();

	void run_computer();

public:

	CPU* m_cpu;

	GPU* m_gpu;

	RAM* m_ram;
	
};