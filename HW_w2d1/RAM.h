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
	~RAM();
	char* GetName() const { return model; };
	double GetPrice() const { return price; };
	void Print();
	void SetName(char* n);
	void SetPrice(double pr);
	
};

