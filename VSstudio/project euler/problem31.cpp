#include "problem31.h"

//remove same branch choice

std::array <int, 9> problem31::tree = {0,1,2,5,10,20,50,100,200};
int problem31::sum = 0;
std::list<int> problem31::memory;
unsigned long long int counter = 0;

unsigned long long int problem31::run()
{
	traverse(0);
	return counter;
}

int problem31::traverse(int n)
{
	sum += tree[n];
	memory.push_back(tree[n]);
	if (sum  == 200)
	{
		memory.sort();
		database.insert(memory);
		//auto i = database.find();
		//if (database.) 
		//{
		//	counter++;
		//	std::cout << "counter up: " << counter << std::endl;
		//}
		
		sum -= tree[n];
		memory.pop_back();
		return 0;
	}
	if (sum  > 200)
	{
		sum -= tree[n];
		memory.pop_back();
		return 0;
	}
	for (int i = 8; i >= 5; i--) 
	{
		traverse(i);
	}
	sum -= tree[n];
	memory.pop_back();
	return 0;
}
