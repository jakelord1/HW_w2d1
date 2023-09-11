#pragma once
#include <iostream>
class CPU
{
	char* model;
	double price;
public:
	CPU(const char* n, double p);
	void Print();
};

