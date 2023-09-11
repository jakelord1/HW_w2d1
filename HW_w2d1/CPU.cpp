#include "CPU.h"
#include <iostream>

CPU::CPU(const char* n, double p) {
	model = new char[strlen(n) + 1];
	strcpy_s(model, strlen(n) + 1, n);
	price = p;
}
void CPU::Print() {
	std::cout << "Model CPU: " << model << "\tPrice: " << price << "$\n";
}