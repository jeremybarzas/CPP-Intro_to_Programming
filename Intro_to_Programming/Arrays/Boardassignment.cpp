#include <iostream>

using namespace std;

void doStuff()
{
	int nums[61];


	for (int i = 0; i < 61; i++)
	{
		nums[i] = i;
	}

	for (int i = 0; i < 61; i++)
	{
		cout << nums[i] << ", ";
	}
}

int main()
{
	doStuff();

	system("pause");

	return 0;
}