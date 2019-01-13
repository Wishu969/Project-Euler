#include "problem18.h"

std::array <int, 120> problem18::pyramide;
std::string problem18::test = "3742468593";
std::string problem18::mystr = "759564174782183587102004824765190123750334880277730763679965042806167092414126568340807033414872334732371694295371446525439152975114701133287773177839681757917152381714914358502729486366046889536730731669874031046298272309709873933853600423";
std::string problem18::temp = "";
int problem18::sum = 0;
int problem18::total = 0;

void problem18::init()
{
	for (size_t i = 0, j = 0; j <= (mystr.length() / 2) - 1; i += 2, j++)
	{
		temp.push_back(mystr[i]);
		temp.push_back(mystr[i + 1]);
		pyramide[j] = FunctionLibrary::stringToInt(temp);
		temp = "";
	}
}

int problem18::findLine(int index)
{
	int ref = 0;
	for (int i = 1;; i++)
	{
		ref += i;
		if (ref > index)
		{
			return i;
		}
	}
}
int problem18::traverseTree(int parent)
{
	if (parent == 120) 
	{
		if (sum > total) { total = sum; }
		return 0;
	}
	sum += pyramide[parent];

	traverseTree(getLeftChild(parent));
	traverseTree(getRightChild(parent));
	sum -= pyramide[parent];
	return 0;
}

int problem18::getLeftChild(int parent)
{
	return (parent + findLine(parent) < 120) ? parent + findLine(parent) : 120;
}

int problem18::getRightChild(int parent)
{
	return (parent + findLine(parent) + 1 < 120) ? parent + findLine(parent) + 1 : 120;
}

void problem18::printArray()
{
	for (int i = 0; i <= 119; i++) 
	{
		std::cout << pyramide[i] << std::endl;
	}
}

int problem18::run()
{
	init();
	traverseTree();
	return total;
}