#pragma once
#include <iostream>
class Keyboard
{
	char* model;
public:
	Keyboard();
	Keyboard(const char* n);
	Keyboard(const Keyboard& obj);
	~Keyboard();
	char* GetName() const { return model; };
	void Print();
	void SetName(const char* n);
};


