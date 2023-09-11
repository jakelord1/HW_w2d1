#include "VPU.h"
#include <iostream>

VPU::VPU(const char* n, double p) {
	model = new char[strlen(n) + 1];
	strcpy_s(model, strlen(n) + 1, n);
	price = p;
}
void VPU::Print() {
	std::cout << "Model RAM: " << model << "\tPrice: " << price << "$\n";
}
