#include "problem31.h"

//remove same branch choice

std::array <int, 9> problem31::tree = {0,1,2,5,10,20,50,100,200};
int problem31::sum = 0;
unsigned long long int counter = 0;

unsigned long long int problem31::run()
{
	traverse(0);
	return counter;
}

int problem31::traverse(int n)
{
	sum += tree[n];
	if (sum  == 200)
	{
		counter++;
		if (counter % 10000000 == 0) 
		{
			std::cout << "counter up: " << counter << std::endl;
		}
		sum -= tree[n];
		return 0;
	}
	if (sum  > 200)
	{
		sum -= tree[n];
		return 0;
	}
	for (int i = 8; i >= 1; i--) 
	{
		traverse(i);
	}
	sum -= tree[n];
	return 0;
}
