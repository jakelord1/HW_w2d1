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
	~CPU();
	void SetName(char* n);
	char* GetName() const { return model; };
	double GetPrice() const { return price; };
	void SetPrice(double pr);
	void Print();
};

