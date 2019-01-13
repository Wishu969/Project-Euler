#pragma once
#include <array>
#include <iostream>
class problem31
{
public:
	static unsigned long long int run();
private:
	static int traverse(int n);
	static std::array <int, 9> tree;
	static int sum;
};

