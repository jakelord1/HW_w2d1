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
	static int count; 
	Laptop();
	Laptop(const char* m, const char* c, const char* cpuname, int cpuprice, const char* ramname, int ramprice, const char* vpuname, int vpuprice, const char* ssdname, int ssdprice);
	Laptop(const Laptop& b);
	~Laptop();
	void Print();
};

