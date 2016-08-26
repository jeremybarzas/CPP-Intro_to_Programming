
// Create a function that takes an array of floats
// and the size of that array as arguments 
// and returns the sum of all elements in that array.

#include <iostream>
using std::cout;
using std::endl;

float sumArray(float array[], int size)
{
	float sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum = sum + array[i];
	}

	return sum;
}

int main()
{
	float array[] = { 0, 1, 5 };
	float sum;

	sum = sumArray(array, 3);

	cout << "The sum of all the elements in the array is: " << sum << "\n \n";

	system("pause");
	
	return 0;
}