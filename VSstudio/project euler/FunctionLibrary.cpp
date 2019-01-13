#include "FunctionLibrary.h"

FunctionLibrary::FunctionLibrary()
{
}

FunctionLibrary::~FunctionLibrary()
{
}

int FunctionLibrary::factorial(unsigned int n)
{
	int y = 1;
	for (int i = 1; i <= n; i++)
	{
		y *= i;
	}
	return y;
}

int FunctionLibrary::stringToInt(std::string s)
{
	int temp = 0;
	sscanf_s(s.data(), "%d", &temp);
	return temp;
}
