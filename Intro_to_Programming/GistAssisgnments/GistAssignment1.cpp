#include <iostream>

int SumTimes5(int, int, int);

int main()
{
	int a = 1;
	int b = 10;
	int c = 100;

	int returnValue = 0;

	returnValue = SumTimes5(a, b, c);

	return 0;
}

int SumTimes5(int a, int b, int c)
{
	int sum = a + b + c;

	return sum * 5;
}