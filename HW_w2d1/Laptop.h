#pragma once
#include "CPU.h"
#include "RAM.h"
#include "SSD.h"
#include "VPU.h"
#include "Keyboard.h"
#include "Mouse.h"
class Laptop // обьект Laptop состоит из : cpu, ram, ssd, vpu. Также будут добавлены: мышь, клавиатура
{			 // обьекты cpu, ram, ssd, vpu, клавиатура - композиция, мышь - агрегация  
	char* name;
	char* color;
	double price;
	CPU cpu; 
	RAM ram;
	SSD ssd;
	VPU vpu;
	Keyboard kbd;
	Mouse* mouse;
public:
	static int count; 
	Laptop();
	Laptop(const char* m, const char* c, const char* cpuname, int cpuprice, const char* ramname, int ramprice, const char* vpuname, int vpuprice, const char* ssdname, int ssdprice, const char* kbd);
	Laptop(const Laptop& b);
	~Laptop();
	void SetMouse(const char* ms);
	void Print();
};

