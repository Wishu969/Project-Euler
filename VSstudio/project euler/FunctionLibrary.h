#pragma once
#include <string>
#include <stdio.h>
class FunctionLibrary
{
public:
	FunctionLibrary();
	~FunctionLibrary();
	static int factorial(unsigned int n);
	static int stringToInt(std::string s);
	//static auto printArray(std::array <std::type_info, > arr );
};

