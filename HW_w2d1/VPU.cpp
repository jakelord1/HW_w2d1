#include "VPU.h"
#include <iostream>

VPU::VPU()
{
	model = nullptr;
	price = 0;
}

VPU::VPU(const char* n, double p) {
	model = new char[strlen(n) + 1];
	strcpy_s(model, strlen(n) + 1, n);
	price = p;
}
VPU::VPU(const VPU& obj)
{
	model = new char[strlen(obj.model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);
	price = obj.price;
	std::cout << "Copy constructor\n";
}
void VPU::SetName(char* n)
{
	if (model != nullptr)
	{
		delete[] model;
	}
	model = new char[strlen(n) + 1];
	strcpy_s(model, strlen(n) + 1, n);
}
void VPU::SetPrice(int pr)
{
	pr = price;
}
void VPU::Print() {
	std::cout << "Model CPU: " << model << "\tPrice: " << price << "$\n";
}
