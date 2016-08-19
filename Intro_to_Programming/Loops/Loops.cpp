#include <iostream>
using namespace std;

void LoopsQuestion1part1()
{
	int centNums[101];

	for (int i = 100; i >= 0; i--)
	{
		centNums[i] = i;

		cout << centNums[i] << ", ";
	}
}

void LoopsQuestion1part2()
{
	int centNums[100];

	for (int i = 99; i >= 0; i--)
	{
		centNums[i] = i;

		cout << centNums[i] << ", ";
	}
}

void LoopsQuestion1part3()
{
	int centNums[100];

	for (int i = 99; i > 0; i--)
	{
		centNums[i] = i;

		cout << centNums[i] << ", ";
	}
}

void LoopsQuestion1part4()
{
	int centNums[101];

	for (int i = 100; i >= 0; i-=2)
	{
		centNums[i] = i;

		cout << centNums[i] << ", ";
	}
}

int main()
{
	char input = 0;

	while (input !='q')
	{
		printf("\n");
		cout << "Enter the question number or q to quit.\n";
		cin >> input;
		printf("\n");
		
		switch (input)
		{
		case '1':
			printf("\n");
			printf("============================== Part 1 ==============================\n");
			LoopsQuestion1part1();
			printf("\n");

			printf("\n");
			printf("============================== Part 2 ==============================\n");
			LoopsQuestion1part2();
			printf("\n");

			printf("\n");
			printf("============================== Part 3 ==============================\n");
			LoopsQuestion1part3();
			printf("\n");

			printf("\n");
			printf("============================== Part 4 ==============================\n");
			LoopsQuestion1part4();
			printf("\n");

			break;		

		case 'q': break;

		default: break;
		}
	}

	return 0;
}