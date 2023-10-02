#include "Keyboard.h"
#include <iostream>

Keyboard::Keyboard()
{
	model = nullptr;
}

Keyboard::Keyboard(const char* n) {
	model = new char[strlen(n) + 1];
	strcpy_s(model, strlen(n) + 1, n);
}
Keyboard::Keyboard(const Keyboard& obj)
{
	model = new char[strlen(obj.model) + 1];
	strcpy_s(model, strlen(obj.model) + 1, obj.model);
	std::cout << "Copy constructor\n";
}
Keyboard::~Keyboard()
{
	delete[] model;
}
void Keyboard::SetName(char* n)
{
	if (model != nullptr)
	{
		delete[] model;
	}
	model = new char[strlen(n) + 1];
	strcpy_s(model, strlen(n) + 1, n);
}
void Keyboard::Print() {
	std::cout << "Model RAM: " << model << "\n";
}
