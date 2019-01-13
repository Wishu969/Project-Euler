#pragma once
#include <string>
#include <iostream>
class problem30
{
public:
	static unsigned long long int run();
private:
	static unsigned long long int power(unsigned int a = 1, unsigned int n = 5);
	static unsigned long long int sum;
	static unsigned long long int temp;
	static std::string str;
};

