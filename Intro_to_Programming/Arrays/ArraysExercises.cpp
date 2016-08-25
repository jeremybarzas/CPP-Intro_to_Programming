#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void arrayQuestion1()
{
	cout << "The array of: int numbers[10] = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 1 }; is valid \n \n";

	cout << "The array of: int matrix[5] = { 1, 2, 3, 4, 5, 6, 7 }; is invalid \n \n";

	cout << "The array of: double radii[10] = (3.2, 4.7}; is invalid \n \n";

	cout << "The array of: int table[7] = { 2, , , 27, , 45, 39 }; is invalid \n \n";

	cout << "The array of: char codes[] = { 'A', 'X', '1', '2', 's' }; is valid \n \n";

	cout << "The array of: int blanks[]; is invalid \n \n";

	cout << "The array of: int collection[-20]; is invalid \n \n";

	cout << "The array of: int hours[3] = 8, 12, 16; is invalid \n \n";
}

void arrayQuestion2()
{
	int values[] = { 2, 6, 10, 14 };

	cout << "A) The line, cout << values[2], will not display anything because it is missing a semicolon (;) at the end of it." << endl;
	cout << endl;

	cout << "B) The line, cout << ++values[0];, will display: " << ++values[0] << endl;
	cout << endl;

	cout << "C) The line, cout << values[1]++;, will display: " << values[1]++ << endl;
	cout << endl;

	cout << "D) The line, x = 2; cout << values[++x];, will not diplay anything because the variable 'x' does not have a data type." << endl;
	cout << endl;

	cout << "E) The line, cout << values[4];, will display: " << values[4] << endl;
	cout << endl;
}

void arrayQuestion3()
{
	int data[10];

	for (int i = 10; i >= 0; i--)
	{
		data[i] = i;
		cout << "The number in the index of " << i << " is: " << data[i] << "\n";
	}

	cout << endl;
}

void arrayQuestion4()
{
	int nums[5];
	int input;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter a number to be stored in the array: ";
		cin >> nums[i];
		cout << endl;
	}
	
	cout << "The numbers in reverse order are: " << "\n \n";

	for (int i = 4; i >= 0; i--)
	{
		cout << "The number in the index of " << i << " is: " << nums[i] << "\n \n";
	}
}

void arrayQuestion5()
{
	int nums[10];

	for (int i = 0; i < 10; i++)
	{
		cout << "Enter a number to be stored in the array: ";
		cin >> nums[i];
	}

	for (int i = 0; i <= 9; i++)
	{
		cout << "The number in the index of " << i << " is: " << nums[i] << "\n \n";
	}

	int largest = nums[0];
	int smallest = nums[0];

		for (int i = 0; i <= 9; i++)
		{
			if (nums[i] > largest)
				largest = nums[i];

			if (nums[i] < smallest)
				smallest = nums[i];
		}

	cout << "The largest number is: " << largest << "\n \n";
	cout << "The smallest number is: " << smallest << "\n \n";
}

int main()
{
	char input = 0;

	while (input != 'q')
	{
		cout << "Pick a Question # or press q to quit.\n";
		cin >> input;
		cout << endl;

		switch (input)
		{
			case '1': arrayQuestion1(); break;

			case '2': arrayQuestion2(); break;

			case '3': arrayQuestion3(); break;

			case '4': arrayQuestion4(); break;

			case '5': arrayQuestion5(); break;

			default: break;
		}
	}

	system("pause");

	return 0;
}