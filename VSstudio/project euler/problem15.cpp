#include "problem15.h"
std::array <unsigned long long int, MAX> problem15::arr;
std::array <unsigned long long int, MAX> problem15::newarr;
unsigned long long int problem15::run()
{
	initArr();
	return recursive();
}
unsigned long long int problem15::initArr(int n)
{
	return (n >= 0) ? initArr(n - 1), arr[n] = 1 : 0;
}
unsigned long long int problem15::calculateNewarr(int n)
{
	return (n >= 0) ? arr[n] + calculateNewarr(n - 1) : 0;
}
unsigned long long int problem15::setNewarr(int n)
{
	return (n < MAX) ? setNewarr(n + 1), newarr[n] = calculateNewarr(n) : 0;
}
unsigned long long int problem15::recursive(int n)
{
	return (n < MAX) ? setNewarr(), arr = newarr, recursive(n + 1) : newarr[MAX- 1];
}