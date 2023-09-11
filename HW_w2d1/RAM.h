#pragma once
#include <iostream>
class RAM
{
	char* model;
	double price;
public:
	RAM(const char* n, double p);
	void Print();
};

