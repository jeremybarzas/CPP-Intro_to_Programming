#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;


void PrintInteger(int variable);

int exampleFunction(string a, int b, int c);

float Half(float a);

void functionsQuestion1();

float functionsQuestion2();

void functionsQuestion4();

int CoinToss(int a);

void functionsQuestion5();

void functionsQuestion6();

int SumTo(int N);

void functionsQuestion7();

int main()
{
	int input = 1;
	
	while (input != 0)
	{
		cout << "Pick a Question # or press 0 to quit.\n";
		cin >> input;
		cout << endl;

		switch (input)
		{
		case 1: functionsQuestion1(); break;

		case 2:
			float smaller;

			smaller = functionsQuestion2();

			cout << "\nThe smaller number is: " << smaller << endl;
			break;

		case 4: functionsQuestion4(); break;

		case 5: functionsQuestion5(); break;

		case 6: functionsQuestion6(); break;

		case 7: functionsQuestion7(); break;

		default:
			break;
		}

		cout << endl;
		system("pause");
		system("cls");
	}

	return 0;
}

void PrintInteger(int variable)
{
	cout << variable << endl;
}

int exampleFunction(string a, int b, int c)
{
	int d;

	cout << "The words you passed as the first parameter are: " << a << "\n \n";

	cout << "The integer you passed as the 2nd parameter is: " << b << "\n \n";

	cout << "The integer you passed as the 3rd parameter is: " << c << "\n \n";

	d = b + c;

	return d;
}

float Half(float a)
{
	float num;
	num = a / 2;

	return num;
}

void functionsQuestion1()
{
	int the_variable = 1;
	PrintInteger(the_variable);
	{
		PrintInteger(the_variable);
		int the_variable = 2;
		PrintInteger(the_variable);
		{
			PrintInteger(the_variable);
			int the_variable = 3;
			PrintInteger(the_variable);
		}
		PrintInteger(the_variable);
	}
	PrintInteger(the_variable);

	cout << "The output of the program is 1, 1, 2, 2, 3, 2, 1. \n \n";
}

float functionsQuestion2()
{
	float a, b, smaller;

	cout << "Enter the first float value: ";
	cin >> a;

	cout << "\nEnter the second float value: ";
	cin >> b;

	smaller = (a < b) ? a : b;

	return smaller;
}

void functionsQuestion4()
{
	float num;
	float halfofNum;

	cout << "Enter a number to be divided in half" << endl;
	cin >> num;
	cout << endl;

	halfofNum = Half(num);

	cout << "Half of the number you enter is: " << halfofNum << endl;
}

int CoinToss(int a)
{
	srand(time(NULL));
	int headsorTails;

	for (int i = 1; i <= a; i++)
	{
		headsorTails = rand() % 2 + 0; //length of 2 starting at 0.

		if (headsorTails == 1)
		{
			cout <<"Coin toss "<< i << " was Heads" << endl;
		}

		else if (headsorTails == 0)
		{
			cout << "Coin toss " << i <<" was Tails" << endl;
		}
	}

	return headsorTails;
}

void functionsQuestion5()
{
	int tosses;

	cout << "How many coin tosses do you want to simulate?\n";
	cin >> tosses;

	CoinToss(tosses);
}

void functionsQuestion6()
{
	/*Find the error in each of the following functions and explain how to fix them.
	int sum(int x, int y)
	{
		int result;
		result = x + y;
	}
	int sum(int n)
	{
		if (0 == n)
			return 0;
		else
			n = n + n;
	}
	
	#include <iostream>

	int main()
	{
		double x = 13.6;
		std::cout << "square of 13.6 = " << square(x) << std::endl;
	}

	int square (int x)
	{
		return x * x;
	}*/

	cout << "The error in the first function is that is does not return anything.\n\n";
	cout << "The error in the second function is it cannot assign a value to the varible n because it is not a variable that was created in the function it is an arbitrary varaible named creaeted for the argument.\n\n";
	cout << "The error in the third function is that the function is being called before it has been declared.\n";
}

int SumTo(int N)
{
	int num = N;
	int sum = 1;

	for (int i = num; i > 1; i--)
	{
		sum = sum + i;
	}

	return sum;
}

void functionsQuestion7()
{
	/*Write a function called SumTo that accepts an integer parameter N and returns the sum of
		all integers from 1 to N, including N.*/
	int input;
	int sum;
	
	cout << "Enter a number to add from 1 to it.\n";
	cin >> input;
	sum = SumTo(input);

	cout << "The sum of all numbers from 1 to " << input << " is: " << sum << "\n\n";
}