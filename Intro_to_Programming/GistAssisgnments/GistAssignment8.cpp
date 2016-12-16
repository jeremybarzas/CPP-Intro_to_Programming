#include <iostream>

/*Create a function that takes in two number and returns the product. You cannot use multiplication. Everyone must do this one.*/

int product(int a, int b)
{
	int c = a;

	for (int i = 1; i < b; i++)
	{
		c += a;
	}

	return c;
}

int main()
{
	int answer = product(9, 9);

	system("pause");
	return 0;
}