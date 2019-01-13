#pragma once
#include <vector>
#include <unordered_set>
#include <string>
#include "FunctionLibrary.h"
class problem74
{
public:
	problem74();
	~problem74();
	static int run();
private:
	static std::unordered_set<int> memory;
	static int nextNumber, sum, counter;
};

