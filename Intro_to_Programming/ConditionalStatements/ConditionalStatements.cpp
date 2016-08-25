#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void ConditionalsQuestion1()
{
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
}

void ConditionalsQuestion2()
{
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
}

void ConditionalsQuestion3()
{
	int nums[5];
	int sum;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter a number to be stored in the array: ";
		cin >> nums[i];
	}

	for (int i = 0; i <= 4; i++)
	{
		cout << "The number in the index of " << i << " is: " << nums[i] << "\n \n";
	}

	sum = nums[0] + nums[1] + nums[2] + nums[3] + nums[4];
	cout << "The sum of the number is: " << sum << "\n \n";

	int temp = 0;
	bool runloop = true;
	bool swapped = false;

	if (sum > 0)
	{
		for (int i = 0, j = 1; runloop == true; i++, j++)
		{
			if (nums[i] > nums[j])
			{
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;

				swapped = true;
			}

			if (i >= 3 )
			{
				i = -1;
				j = 0;

				if (swapped == false)
					runloop = false;

				swapped = false;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "The number in the index of " << i << " is: " << nums[i] << "\n \n";
	}
}

void ConditionalsQuestion4()
{
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
}

void ConditionalsQuestion5()
{
	/*
	if (x == 0)
	{
	y = 0;
	}

	else
	{
	y = 10 / x;
	}
	*/

	int x = 0;
	int y;
	float result;

	result = (x == 0) ? 0 : 10 / x;
}

void ConditionalsQuestion6()
{
	float input1 = 0;
	float input2 = 0;
	float output;
	char mathOpr;

	cout << "Enter the first number." << endl;
	cin >> input1;
	printf("\n");

	cout << "Enter the second number." << endl;
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
		printf("\n");
	}
}

void ConditionalsQuestion7()
{
	int numMonth = 0;
	int numDays = 0;
	string month = "fuckign nothing";

	cout << "Enter a month by the number of month is it in the year." << endl;
	cin >> numMonth;

	switch (numMonth)
	{
	case 1:
		numDays = 31;
		month = "January";
		break;

	case 2:
		numDays = 28;
		month = "Febuary";
		break;

	case 3:
		numDays = 31;
		month = "March";
		break;

	case 4:
		numDays = 30;
		month = "April";
		break;

	case 5:
		numDays = 31;
		month = "May";
		break;

	case 6:
		numDays = 30;
		month = "June";
		break;

	case 7:
		numDays = 31;
		month = "July";
		break;

	case 8:
		numDays = 31;
		month = "August";
		break;

	case 9:
		numDays = 3;
		month = "September";
		break;

	case 10:
		numDays = 31;
		month = "October";
		break;

	case 11:
		numDays = 30;
		month = "November";
		break;

	case 12:
		numDays = 30;
		month = "December";
		break;
	}

	cout << "The month chosen" << " (" << numMonth << ") " << "was " << month << " it has " << numDays << " days in it." << endl;
	printf("\n");
}

int main()
{
	char input = 0;

	while (input != 'q')
	{
		cout << "Pick an Example... or press q to quit.\n";

		cin >> input;

		switch (input)
		{
		case '1': ConditionalsQuestion1(); break;

		case '2': ConditionalsQuestion2(); break;

		case '3': ConditionalsQuestion3(); break;

		case '4': ConditionalsQuestion4(); break;

		case '5': ConditionalsQuestion5(); break;

		case '6': ConditionalsQuestion6(); break;

		case '7': ConditionalsQuestion7(); break;

		case 'q': break;

		default: break;
		}
	}

	return 0;
}