#include <iostream>

int sumofLargest(int[], int);

int main()
{
	const int size = 5;
	int nums[size] = { 1,2,7,4,5 };

	int returnValue = 0;

	returnValue = sumofLargest(nums, size);

	std::cout << returnValue << "\n\n";

	system("pause");

	return 0;
}

int sumofLargest(int a[], int s)
{
	int size = s;

	int * numsPtr = a;

	int largest1 = numsPtr[0];
	int largest2 = numsPtr[0];

	int largest1Index = 0;
	int largest2Index = 0;

	for (int i = 0; i < size; i++)
	{
		if (numsPtr[i] > largest1)
		{
			largest1 = numsPtr[i];
			largest1Index++;
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (numsPtr[i] > largest2 && numsPtr[i] < largest1)
		{
			largest2 = numsPtr[i];
			largest2Index++;
		}
	}

	int sum = numsPtr[largest1Index] + numsPtr[largest2Index];

	return sum;
}