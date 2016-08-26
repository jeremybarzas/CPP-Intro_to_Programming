#include <iostream>
#include <string>
using namespace std;

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

int main()
{
	char input = 0;

	while (input != 'q')
	{
		cout << "Pick a Question #, press q to quit, or e for the example function.\n";
		cin >> input;
		cout << endl;

		switch (input)
		{
		case '1': 
			functionsQuestion1();
			break;

		case '2':
			float a, b, smaller;

			smaller = functionsQuestion2();

			cout << "The smaller number is: " << smaller;
			break;

		case 'e':
			int sum;

			sum = exampleFunction("These are the words you entered as a parameter. ", 1, 2);

			cout << "The sum of the numbers you passed as the 2nd and 3rd parameters is: " << sum << "\n \n";
			break;

		default:
			break;
		}

		system("cls");
	}

	system("pause");
	return 0;
}