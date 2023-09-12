#pragma once
#include <iostream>
class CPU
{
	char* model;
	double price;
public:
	CPU();
	CPU(const char* n, double p);
	CPU(const CPU& obj);
	void SetName(char* n);
	void SetPrice(int pr);
	void Print();
};

