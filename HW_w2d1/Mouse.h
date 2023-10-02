#pragma once
#include <iostream>
class Mouse
{
	char* model;
public:
	Mouse();
	Mouse(const char* n);
	Mouse(const Mouse& obj);
	~Mouse();
	char* GetName() const { return model; };
	void Print();
	void SetName(char* n);

};


