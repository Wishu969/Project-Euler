#include "problem30.h"

unsigned long long int problem30::sum = 0;
unsigned long long int problem30::temp = 0;
std::string problem30::str = "";

unsigned long long int problem30::run()
{
	for (int i = 2; i <= 2000000; i++) 
	{
		for (size_t j = 0; j < str.length(); j++) 
		{
			temp += power((unsigned int)str[j] - 48);
		}
		str = "";
		if (temp == i) 
		{
			sum += temp;
		}
		temp = 0;
	}
	return sum;
}

unsigned long long int problem30::power(unsigned int a, unsigned int n)
{
	return (n > 0) ? a * power(a, n - 1) : 1;
}
