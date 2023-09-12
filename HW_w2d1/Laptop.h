#pragma once
#include "CPU.h"
#include "RAM.h"
#include "SSD.h"
#include "VPU.h"
class Laptop
{
	char* name;
	char* color;
	double price;
	CPU cpu;
	RAM ram;
	SSD ssd;
	VPU vpu;
public:
	static int amount;
	Laptop();
	Laptop(const char* m, int y, const char* engName, int price);
	Laptop(const Laptop& b);
	~Laptop();
	void Print();
};

