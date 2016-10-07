#include <iostream>

void PassbyValue(int);
void PassbyRefernece(int&);

int main()
{
	int number = 5;

	PassbyValue(number);

	PassbyRefernece(number);

	return 0;
}

// this WILL NOT change the variable outside the function.
void PassbyValue(int a)
{
	a = a + 5;

	return;
}

// this WILL change the variable outside the function.
void PassbyRefernece(int &a)
{
	a = a + 5;

	return;
}