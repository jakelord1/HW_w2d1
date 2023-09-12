#include "SSD.h"
#include <iostream>

SSD::SSD()
{
	model = nullptr;
	price = 0;
}

SSD::SSD(const char* n, double p) {
	model = new char[strlen(n) + 1];
	strcpy_s(model, strlen(n) + 1, n);
	price = p;
}
SSD::SSD(const SSD& obj)
{
	model = new char[strlen(obj.model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);
	price = obj.price;
	std::cout << "Copy constructor\n";
}
void SSD::SetName(char* n)
{
	if (model != nullptr)
	{
		delete[] model;
	}
	model = new char[strlen(n) + 1];
	strcpy_s(model, strlen(n) + 1, n);
}
void SSD::SetPrice(int pr)
{
	pr = price;
}
void SSD::Print() {
	std::cout << "Model CPU: " << model << "\tPrice: " << price << "$\n";
}
