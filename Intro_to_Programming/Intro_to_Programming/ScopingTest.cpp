#include <iostream>

int main()
{
	int num = 5;
	{
		int x = 10;
		num = x;
	}

	printf("%i", num, "\n");
	printf("\n");
	printf("\n");

	system("pause");
	return 0;
}