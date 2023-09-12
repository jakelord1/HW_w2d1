#pragma once
class VPU
{
	char* model;
	double price;
public:
	VPU();
	VPU(const char* n, double p);
	VPU(const VPU& obj);
	void SetName(char* n);
	void SetPrice(int pr);
	void Print();
};

