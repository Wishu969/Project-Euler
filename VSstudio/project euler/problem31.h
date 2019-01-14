#pragma once
#include <array>
#include <list>
#include <iostream>
#include <unordered_set>
class problem31
{
public:
	static unsigned long long int run();
private:
	static int traverse(int n);
	static std::array <int, 9> tree;
	static int sum;
	static std::list<int> memory;
	static std::unordered_set<std::list<int> > database;
};

