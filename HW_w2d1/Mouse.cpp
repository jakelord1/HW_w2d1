#include "Mouse.h"
#include <iostream>

Mouse::Mouse()
{
	model = nullptr;
}

Mouse::Mouse(const char* n) {
	model = new char[strlen(n) + 1];
	strcpy_s(model, strlen(n) + 1, n);
}
Mouse::Mouse(const Mouse& obj)
{
	model = new char[strlen(obj.model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);
	std::cout << "Copy constructor\n";
}
Mouse::~Mouse()
{
	delete[] model;
}
void Mouse::SetName(char* n)
{
	if (model != nullptr)
	{
		delete[] model;
	}
	model = new char[strlen(n) + 1];
	strcpy_s(model, strlen(n) + 1, n);
}
void Mouse::Print() {
	std::cout << "Model RAM: " << model << "\n";
}

