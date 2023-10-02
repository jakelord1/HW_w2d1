#include "Laptop.h"
int Laptop::count = 0;
Laptop::Laptop()
{
	name = nullptr;
	color = nullptr;
	price = 0;
}

Laptop::Laptop(const char* m, const char* c, const char* cpuname, int cpuprice, const char* ramname, int ramprice, const char* vpuname, int vpuprice, const char* ssdname, int ssdprice, const char* kbdn):cpu(cpuname, cpuprice),ram(ramname, ramprice),ssd(ssdname,ssdprice),vpu(vpuname,vpuprice),kbd(kbdn)
{
	this->name = new char[strlen(m) + 1];
	strcpy_s(this->name, strlen(m) + 1, m);
	this->color = new char[strlen(c) + 1];
	strcpy_s(this->color, strlen(c) + 1, c);
	this->price = cpuprice+ramprice+vpuprice+ssdprice;
	kbd.SetName(kbdn);
	++count;
}

Laptop::Laptop(const Laptop& b)
{
	name = new char[strlen(b.name) + 1];
	strcpy_s(name, strlen(b.name) + 1, b.name);
	color = new char[strlen(b.color) + 1];
	strcpy_s(color, strlen(b.color) + 1, b.color);
	price = b.price;

	cpu.SetName(b.cpu.GetName());
	cpu.SetPrice(b.cpu.GetPrice());

	vpu.SetName(b.vpu.GetName());
	vpu.SetPrice(b.vpu.GetPrice());

	ram.SetName(b.ram.GetName());
	ram.SetPrice(b.ram.GetPrice());

	ssd.SetName(b.ssd.GetName());
	ssd.SetPrice(b.ssd.GetPrice());
}

Laptop::~Laptop()
{
	delete[] name;
	delete[] color;
}

void Laptop::SetMouse(const char* ms)
{
	*mouse = ms;
}

void Laptop::Print()
{
	std::cout << "Laptop Name: " << name << "\tColor: " << color << "\tPrice: " << price << "\tAmount: " << count << "\n\n";
	cpu.Print();
	vpu.Print();
	ram.Print();
	ssd.Print();
}
