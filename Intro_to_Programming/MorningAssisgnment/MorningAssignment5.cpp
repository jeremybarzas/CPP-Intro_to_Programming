#include <iostream>

using std::cout;

int MostCommonInt(int *, int);

void printAnswer(int *, int, int);

int main()
{
	const int size = 10;

	int nums[size] = {1,2,3,3,3,4,4,5,6,7 };

	int *ptr = nums;

	int output = MostCommonInt(ptr, size);

	printAnswer(ptr, size, output);

	system("pause");

	return 0;
}

int MostCommonInt(int *array, int size)
{
	int mostCommon = 0;
	int mostCommonCount = 0;

	int current = 0;
	int currentCount = 0;

	for (int i = 0; i < size; i++)
	{
		current = 0;
		currentCount = 0;
		current = array[i];

		for (int j = 0; j < size; j++)
		{
			if (current == array[j])
			{
				currentCount++;
			}

			if (currentCount > mostCommonCount)
			{
				mostCommonCount = currentCount;
				mostCommon = current;
			}
		}
	}

	return mostCommon;
}

void printAnswer(int * array, int size, int output)
{
	printf("The array contains: ");

	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

	cout << "\n\nThe most common integer in the array is: " << output << "\n\n";

	return;
}