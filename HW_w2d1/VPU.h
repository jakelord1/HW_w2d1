#pragma once
class VPU
{
	char* model;
	double price;
public:
	VPU();
	VPU(const char* n, double p);
	VPU(const VPU& obj);
	~VPU();
	char* GetName() const { return model; };
	double GetPrice() const { return price; };
	void SetName(char* n);
	void SetPrice(double pr);
	void Print();
};

