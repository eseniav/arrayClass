#pragma once

#include <iostream>
#include <time.h>
#include <map>
#include <vector>
using namespace std;

class Array
{
private:
	vector<int> mas;
public:
	Array();
	Array(int _size);
	~Array();
	void Print();
	int Sum();
	double Avg();
	void SetRandomValues(int _size);
	void Initialize(int _size);
	void PrintCounts();
};

