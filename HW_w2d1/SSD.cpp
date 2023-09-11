#include "SSD.h"
#include <iostream>

SSD::SSD(const char* n, double p) {
	model = new char[strlen(n) + 1];
	strcpy_s(model, strlen(n) + 1, n);
	price = p;
}
void SSD::Print() {
	std::cout << "Model SSD: " << model << "\tPrice: " << price << "$\n";
}
