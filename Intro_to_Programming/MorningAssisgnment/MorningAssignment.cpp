#include <iostream>

using std::cout;

void populateArray(int *, int);

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