#include "problem28.h"

int problem28::direction;
unsigned long long int problem28::sum;

problem28::problem28()
{
	direction = 1001;
	sum = 1;
}


problem28::~problem28()
{
}

int problem28::run()
{
	std::vector<unsigned int> spiral(1002001, 1);
	for (unsigned long i = 0; i < 1002001; i++)
	{
		spiral[i] = i + 1;
	}

	int a = 0;
	for (unsigned long i = 2, j = 1; j <= 500; i += 8, j++)
	{
		a += i;
		sum += spiral[a];
	}
	a = 0;
	for (unsigned long i = 4, j = 1; j <= 500; i += 8, j++)
	{
		a += i;
		sum += spiral[a];
	}
	a = 0;
	for (unsigned long i = 6, j = 1; j <= 500; i += 8, j++)
	{
		a += i;
		sum += spiral[a];
	}
	a = 0;
	for (unsigned long i = 8, j = 1; j <= 500; i += 8, j++)
	{
		a += i;
		sum += spiral[a];
	}
	return sum;
}
