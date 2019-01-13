#pragma once
#include <array>
#include <string>
#include "FunctionLibrary.h"
#include <iostream>

class problem18
{
public:
	static int run();
private:
	static void init();
	static int findLine(int index);
	static int traverseTree(int parent = 0);
	static int getLeftChild(int parent);
	static int getRightChild(int parent);

	static std::string mystr;
	static std::string test;
	static std::string temp;
	static int sum;
	static int total;
	static std::array <int, 120> pyramide;
	static void printArray();
};

