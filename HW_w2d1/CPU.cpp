#include "CPU.h"
#include <iostream>

CPU::CPU()
{
	model = nullptr;
	price = 0;
}

CPU::CPU(const char* n, double p) {
	model = new char[strlen(n) + 1];
	strcpy_s(model, strlen(n) + 1, n);
	price = p;
}
CPU::CPU(const CPU& obj)
{
	model = new char[strlen(obj.model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);
	price = obj.price;
	std::cout << "Copy constructor\n";
}
CPU::~CPU()
{
	delete[] model;
}
void CPU::SetName(char* n)
{
	if (model != nullptr)
	{
		delete[] model;
	}
	model = new char[strlen(n) + 1];
	strcpy_s(model, strlen(n) + 1, n);
}
void CPU::SetPrice(int pr)
{
	pr = price;
}
void CPU::Print() {
	std::cout << "Model CPU: " << model << "\tPrice: " << price << "$\n";
}