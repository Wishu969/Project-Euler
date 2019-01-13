#include "problem40.h"
std::string problem40::s;
problem40::problem40()
{

}

problem40::~problem40()
{
}

void problem40::init()
{
	for (int i = 1; s.length() <= 1000000; i++)
	{
		std::string temp = std::to_string(i);
		s.append(temp);
	}
}

int problem40::run()
{
	init();
	int j = 1;
	for (int i = 1; i != 1000000; i *= 10) 
	{
		j *= (int)s[i - 1] - 48;
	}
	std::cout << j;
	return 0;
}
