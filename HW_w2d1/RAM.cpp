#include "RAM.h"
#include <iostream>

RAM::RAM()
{
	model = nullptr;
	price = 0;
}

RAM::RAM(const char* n, double p) {
	model = new char[strlen(n) + 1];
	strcpy_s(model, strlen(n) + 1, n);
	price = p;
}
RAM::RAM(const RAM& obj)
{
	model = new char[strlen(obj.model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);
	price = obj.price;
	std::cout << "Copy constructor\n";
}
void RAM::SetName(char* n)
{
	if (model != nullptr)
	{
		delete[] model;
	}
	model = new char[strlen(n) + 1];
	strcpy_s(model, strlen(n) + 1, n);
}
void RAM::SetPrice(int pr)
{
	pr = price;
}
void RAM::Print() {
	std::cout << "Model CPU: " << model << "\tPrice: " << price << "$\n";
}
