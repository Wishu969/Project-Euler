#pragma once
#include <array>
class problem31
{
public:
	static int run();
private:
	static int traverse(int n);
	static std::array <int, 8> tree;
	static int sum;
};

