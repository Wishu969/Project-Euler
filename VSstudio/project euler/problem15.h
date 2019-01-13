#pragma once
#include <iostream>
#include <array>
#include <vector>

#define MAX 21
class problem15
{
public:
	static unsigned long long int run();
private:
	static unsigned long long int initArr(int n = MAX-1);
	static unsigned long long int calculateNewarr(int n);
	static unsigned long long int setNewarr(int n = 0);
	static unsigned long long int recursive(int n = 1);

	static std::array <unsigned long long int, MAX> arr;
	static std::array <unsigned long long int, MAX> newarr;
};

