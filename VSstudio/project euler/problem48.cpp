#include "problem48.h"



problem48::problem48()
{
}


problem48::~problem48()
{
}

int problem48::run()
{
	std::cout << power(12, 12) << std::endl;
	/*
	unsigned long long int y = 0;
	unsigned long long int temp = 0;
	for (unsigned int i = 1; i <= 1000; i++) 
	{
		temp = power(i, i);
		y += temp;
		std::cout << i << " squared = " << temp << "   total current = " << y << std::endl;
	}
	std::cout << y;
	*/
	return 0;
}

unsigned long long int problem48::power(unsigned int a, unsigned int b)
{
	unsigned long long int temp = 1;
	for (unsigned long long int i = 1; i <= b; i++) 
	{
		temp *= a;
		std::string tempstr = std::to_string(temp);
		if (tempstr.length() >= 10) 
		{
			tempstr.erase(0, (tempstr.length() - 10));
		}	
		temp = FunctionLibrary::stringToInt(tempstr);
		std::cout << temp << " || " <<tempstr.length() << std::endl;
	}
	return temp;
}
