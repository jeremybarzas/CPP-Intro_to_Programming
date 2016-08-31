#include <iostream>
using namespace std;

void loopsExercise1();
void loopsExercise2();

int main()
{
	char input = 0;

	while (input !='q')
	{
		cout << "\n\n";
		cout << "Enter the question number or q to quit.\n";	
		cin >> input;
		cout << endl;
		
		switch (input)
		{
		case '1': loopsExercise1(); break;

		case '2': loopsExercise2(); break;

		default: break;
		}
	}

	return 0;
}

void loopsExercise1()
{
	{
		/*Using a for loop to iterate backward, print the values 100 to 0.
		- Modify the for loop to include 0 and include 100
		- Modify the for loop to include 0 and not 100
		- Modify the for loop to not include 0 and include 100
		- Modify the for loop to decrement by 2*/

		cout << "============================== Part 1 ==============================\n";

		int centNums[101];

		for (int i = 100; i >= 0; i--)
		{
			centNums[i] = i;

			cout << centNums[i] << " ";
		}

		cout << "\n\n============================== Part 2 ==============================\n";

		centNums[100];

		for (int i = 99; i >= 0; i--)
		{
			centNums[i] = i;

			cout << centNums[i] << " ";
		}

		cout << "\n\n============================== Part 3 ==============================\n";

		centNums[100];

		for (int i = 99; i > 0; i--)
		{
			centNums[i] = i;

			cout << centNums[i] << " ";

		}

		cout << "\n\n============================== Part 4 ==============================\n";

		centNums[101];

		for (int i = 100; i >= 0; i -= 2)
		{
			centNums[i] = i;

			cout << centNums[i] << " ";
		}
	}
}

void loopsExercise2()
{
	/*Using a for loop, iterate through numbers 0 to 100.
		- For multiples of 3 print “Fizz”
		- For multiples of 5 print “Buzz”
		- For multiples of 3 and 5 print “FizzBuzz”
		- Otherwise print the number.
		
		Note, you will need to use the modulus operator (%)*/



}