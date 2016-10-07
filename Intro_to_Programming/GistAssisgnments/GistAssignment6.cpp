#include <iostream>

void SwapNum(int&, int&);
void SwapChar(char&, char&);

int main()
{
	int first = 5;
	int second = 10;

	SwapNum(first, second);

	char charA = 'a';
	char charB = 'b';

	SwapChar(charA, charB);

	return 0;
}

void SwapNum(int &a, int &b)
{
	a = b + a;
	b = a - b;
	a = a - b;

	return;
}

void SwapChar(char &a, char &b)
{
	a = b + a;
	b = a - b;
	a = a - b;

	return;
}