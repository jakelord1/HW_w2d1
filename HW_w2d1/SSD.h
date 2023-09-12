#pragma once
#include <iostream>
class SSD
{
	char* model;
	double price;
public:
	SSD();
	SSD(const char* n, double p);
	SSD(const SSD& obj);
	~SSD();
	char* GetName() const { return model; };
	int GetPrice() const { return price; };
	void SetName(char* n);
	void SetPrice(int pr);
	void Print();
};
