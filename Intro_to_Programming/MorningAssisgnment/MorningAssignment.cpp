#include <iostream>
#include <stdlib.h>
#include <string>

using std::string;
using std::cout;
using std::cin;

void populateArray(int *ptr, int num);

int main()
{
	const int arraySize = 10;
	int intArray[arraySize];

	int *arryPtr = &intArray[0];

	populateArray(arryPtr, arraySize);

	for (int i = 0; i < 10; i++)
	{
		cout << intArray[i] << "\n";
	}

	system("pause");

	return 0;
}

void populateArray(int *intPtr, int num)
{
	for (int i = 0; i < num; i++)
	{
		intPtr[i] = i * 2;
	}

	return;
}