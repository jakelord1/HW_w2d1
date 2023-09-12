#pragma once
#include <iostream>
class RAM
{
	char* model;
	double price;
public:
	RAM();
	RAM(const char* n, double p);
	RAM(const RAM& obj);
	void Print();
	void SetName(char* n);
	void SetPrice(int pr);
	
};

