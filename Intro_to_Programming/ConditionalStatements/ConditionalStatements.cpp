#include <iostream>
using namespace std;

int main()
{
	// 1. Write a statement that assigns 100 to x when y is equal to zero.

	int y = 0;
	int x = 0;
	
	cout << "The value of y is : " << y << endl;
	printf("\n");

	cout << "The value of x is : " << x << endl;
	printf("\n");

	if (y == 0)
	{
		x = 100;
	}

	cout << "The new value of x is : " << x << endl;
	printf("\n");
	
	// 2. Write a program that ask the user for two numbers then display the large number to the console.

	int a;
	int b;

	cout << "Enter the first number. " << endl;
	cin >> a;
	printf("\n");

	cout << "Enter the second number" << endl;
	cin >> b;
	printf("\n");

	if (a > b)
	{
		cout << "The first number of " << a << " is larger than the second number of " << b << endl;
		printf("\n");
	}

	if (a < b)
	{
		cout << "The second number of " << b << " is larger than the first number of " << a << endl;
		printf("\n");
	}

	if (a == b)
	{
		cout << "The first number of " << a << " is equal to the second number of " << b << endl;
		printf("\n");
	}

	// 3. Write a program that accepts and displays 5 numbers in ascending order is the sum of the 5 numbers is postive and in desxceneding order if the sum is negative.
	// if the sum is equal to zero then the program must display the numbers in the same order that they were entered.

	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int numSize1 = 0;
	int numSize2 = 0;
	int numSize3 = 0;
	int numSize4 = 0;
	int numSize5 = 0;
	int sum;

	cout << "Enter the first number." << endl;
	cin >> num1;
	printf("\n");

	cout << "Enter the second number." << endl;
	cin >> num2;
	printf("\n");

	cout << "Enter the third number." << endl;
	cin >> num3;
	printf("\n");

	cout << "Enter the fourth number." << endl;
	cin >> num4;
	printf("\n");

	cout << "Enter the fifth number." << endl;
	cin >> num5;
	printf("\n");

	sum = num1 + num2 + num3 + num4 + num5;

	// Checking for and assigning the largest number.
	if ((num1 > num2) && (num1 > num3) && (num1 > num4) && (num1 > num5))
	{
		numSize1 = num1;
	}

	else if ((num2 > num1) && (num2 > num3) && (num2 > num4) && (num2 > num5))
	{
		numSize1 = num2;
	}

	else if ((num3 > num1) && (num3 > num2) && (num3 > num4) && (num3 > num5))
	{
		numSize1 = num3;
	}

	else if ((num4 > num1) && (num4 > num2) && (num4 > num3) && (num4 > num5))
	{
		numSize1 = num4;
	}

	else if ((num5 > num1) && (num5 > num2) && (num5 > num3) && (num5 > num4))
	{
		numSize1 = num5;
	}
	
	// Checking for and assigning the second largest number.
	else if ((num1 < numSize1) && (num1 > num2) && (num1 > num3) && (num1 > num4) && (num1 > num5))
	{
		numSize2 = num1;
	}

	else if ((num2 < numSize1) && (num2 > num1) && (num1 > num3) && (num1 > num4) && (num1 > num5))
	{
		numSize2 = num2;
	}

	else if ((num3 < numSize1) && (num3 > num1) && (num1 > num2) && (num3 > num4) && (num3 > num5))
	{
		numSize2 = num3;
	}

	else if ((num4 < numSize1) && (num4 > num1) && (num4 > num2) && (num4 > num3) && (num4 > num5))
	{
		numSize2 = num4;
	}

	else if ((num5 < numSize1) && (num5 > num1) && (num5 > num2) && (num5 > num3) && (num5> num4))
	{
		numSize2 = num5;
	}

	// Checking for and assigning the third largest number.
	else if ((num1 < numSize1) && (num1 < numSize2) && (num1 > num2) && (num1 > num3) && (num1 > num4) && (num1 > num5))
	{
		numSize3 = num1;
	}

	else if ((num2 < numSize1) && (num2 < numSize2) && (num2 > num1) && (num1 > num3) && (num1 > num4) && (num1 > num5))
	{
		numSize3 = num2;
	}

	else if ((num3 < numSize1) && (num3 < numSize2) && (num3 > num1) && (num1 > num2) && (num3 > num4) && (num3 > num5))
	{
		numSize3 = num3;
	}

	else if ((num4 < numSize1) && (num4 < numSize2) && (num4 > num1) && (num4 > num2) && (num4 > num3) && (num4 > num5))
	{
		numSize3 = num4;
	}

	else if ((num5 < numSize1) && (num5 < numSize2) && (num5 > num1) && (num5 > num2) && (num5 > num3) && (num5> num4))
	{
		numSize3 = num5;
	}

	// Checking for and assigning the fourth largest number.
	else if ((num1 < numSize1) && (num1 < numSize2) && (num1 < numSize3) && (num1 > num2) && (num1 > num3) && (num1 > num4) && (num1 > num5))
	{
		numSize4 = num1;
	}

	else if ((num2 < numSize1) && (num2 < numSize2) && (num2 < numSize3) && (num2 > num1) && (num1 > num3) && (num1 > num4) && (num1 > num5))
	{
		numSize4 = num2;
	}

	else if ((num3 < numSize1) && (num3 < numSize2) && (num3 < numSize3) && (num3 > num1) && (num1 > num2) && (num3 > num4) && (num3 > num5))
	{
		numSize4 = num3;
	}

	else if ((num4 < numSize1) && (num4 < numSize2) && (num4 < numSize3) && (num4 > num1) && (num4 > num2) && (num4 > num3) && (num4 > num5))
	{
		numSize4 = num4;
	}

	else if ((num5 < numSize1) && (num5 < numSize2) && (num5 < numSize3) && (num5 > num1) && (num5 > num2) && (num5 > num3) && (num5> num4))
	{
		numSize4 = num5;
	}

	// Checking for and assigning the fifth largest number.
	else if ((num1 < numSize1) && (num1 < numSize2) && (num1 < numSize3) && (num1 < numSize4) && (num1 > num2) && (num1 > num3) && (num1 > num4) && (num1 > num5))
	{
		numSize5 = num1;
	}

	else if ((num2 < numSize1) && (num2 < numSize2) && (num2 < numSize3) && (num2 < numSize4) && (num2 > num1) && (num1 > num3) && (num1 > num4) && (num1 > num5))
	{
		numSize5 = num2;
	}

	else if ((num3 < numSize1) && (num3 < numSize2) && (num3 < numSize3) && (num3 < numSize4) && (num3 > num1) && (num1 > num2) && (num3 > num4) && (num3 > num5))
	{
		numSize5 = num3;
	}

	else if ((num4 < numSize1) && (num4 < numSize2) && (num4 < numSize3) && (num4 < numSize4) && (num4 > num1) && (num4 > num2) && (num4 > num3) && (num4 > num5))
	{
		numSize5 = num4;
	}

	else if ((num5 < numSize1) && (num5 < numSize2) && (num5 < numSize3) && (num5 < numSize4) && (num5 > num1) && (num5 > num2) && (num5 > num3) && (num5> num4))
	{
		numSize5 = num5;
	}
	
	// Printing out number is certains orders depending on the sum of them all.
	if (sum = 0)
	{	
		cout << "Because sum is equal to zero numbers are in the order they were entered: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << ", " << num5 << endl;
		printf("\n");
	}

	if (sum > 0)
	{
		cout << "Because sum is positive the numbers are in ascending order: " << "," << numSize1 << "," << numSize2 << "," << numSize3 << "," << numSize4 << "," << numSize5 << endl;
		printf("\n");
	}

	if (sum < 0)
	{
		cout << "Because sum is negative the numbers are in decending order: " << "," << numSize5 << "," << numSize4 << "," << numSize3 << "," << numSize2 << "," << numSize1 << endl;
		printf("\n");
	}

	// 4. Convert the following code into a switch statement.
	/*
		if (choice == 1)
		{
			std::cout << "1";
		}
			
		else if (choice == 2 || choice == 3)
		{
			std::cout << "2 or 3";
		}
		
		else if (choice == 4)
		{
			std::cout << "4";
		}
		
		else
		{
			std::cout << "Invalid";
		}
	*/

	int choice;

	cout << "Enter a number one of the following numbers: 0, 1, 2, 3" << endl;
	cin >> choice;
	printf("\n");

	switch (choice)
	{
		case 0:
			cout << "0";
			printf("\n");
			break;
		
		case 1:
		case 2:
			cout << "1 or 2";
			printf("\n");
			break;
		
		case 3:
			cout << "3";
			printf("\n");
			break;
		
		default:
			cout << "Invalid input";
			printf("\n");
	}


	// 6. Write a program that accepts from the user two numbers and a mathematical operation character. Preform the appropriate maths base on which character is input.

	float input1 = 0;
	float input2 = 0;
	float output;
	char mathOpr;

	cout << "Enter the first number." << endl;
	cin >> input1;
	printf("\n");

	cout << "Enter the second number."<< endl;
	cin >> input2;
	printf("\n");

	cout << "Enter a mathematical operation character." << endl;
	cin >> mathOpr;
	printf("\n");

	switch (mathOpr)
	{
	case '+':
		output = input1 + input2;
		cout << output << endl;
		printf("\n");
		break;

	case '-':
		output = input1 - input2;
		cout << output << endl;
		printf("\n");
		break;

	case '/':
		output = input1 / input2;
		cout << output << endl;
		printf("\n");
		break;

	case '*':
		output = input1 * input2;
		cout << output << endl;
		printf("\n");
		break;

	case '%':
		output = (int)input1 % (int)input2;
		cout << output << endl;
		printf("\n");
		break;

	default:
		cout << "Invalid Operator";
		break;
	}

	system("pause");

	return 0;
}