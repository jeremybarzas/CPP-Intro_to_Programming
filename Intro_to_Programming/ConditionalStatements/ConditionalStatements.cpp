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


	// 6. Write a progrma that accepts form the user two numbers and a mathematical operation character. Preform the appropriate maths base on which character is input.

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