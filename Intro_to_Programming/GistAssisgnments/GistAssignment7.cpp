#include <iostream>

using std::cout;

int Sumof2largest(int[], int);

void printArray(int[], int);

int main()
{
	const int size = 10;
	int intArray[size] = {10,1,2,3,4,9,6,7,8,9};

	printArray(intArray, size);

	int result = Sumof2largest(intArray, size);

	system("pause");

	return 0;
}

int Sumof2largest(int a[], int size)
{
	int sum = 0;
	int largest1st = 0;
	int largest2nd = 0;

	int lrgIndex = 0;

	for (int i = 0; i < size; i++)
	{
		if (a[i] > largest1st)
		{
			largest1st = a[i];
			lrgIndex = i;
		}
	}

	for (int j = 0; j < size; j++)
	{
		if (j == lrgIndex)
		{
			j++;
		}
		if (a[j] > largest2nd)
		{
			largest2nd = a[j];
		}
	}

	cout << "The largest integer value is: " << largest1st << "\n\n";
	cout << "The second largest integer value is: " << largest2nd << "\n\n";
	
	sum = largest1st + largest2nd;

	cout << "Sum of 2 largest integers is: " << sum << "\n\n";

	return sum;
}

void printArray(int a[], int size)
{
	printf("The values stored in the array are: ");

	for (int i = 0; i < size; i++)
	{
		if (i != size - 1)
		{
			cout << a[i] << ", ";
		}
		else
		{
			cout << a[i];
		}
	}

	cout << "\n\n";

	return;
}