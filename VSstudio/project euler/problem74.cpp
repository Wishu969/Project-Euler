#include "problem74.h"
std::unordered_set<int> problem74::memory;
int problem74::nextNumber, problem74::sum, problem74::counter;
problem74::problem74()
{
	sum = 42;
}

problem74::~problem74()
{
}

int problem74::run()
{
	for (int i = 200000; i <= 1000000; i++) 
	{
		counter = 1;
		memory.clear();
		bool isLoop = true;
		for (int j = i; isLoop;)
		{
			nextNumber = 0;
			std::string xs = std::to_string(j);
			for (size_t i = 0; i < xs.length(); i++)
			{
				nextNumber += FunctionLibrary::factorial(((int)xs[i]) - 48);
			}
			std::unordered_set<int>::const_iterator key = memory.find(nextNumber);
			if (key == memory.end())
			{
				memory.insert(nextNumber);
				j = nextNumber;
				counter++;
			}
			else
			{
				isLoop = false;
			}
		}
		if (counter == 60)
		{
			sum++;
		}
	}
	return sum;
}