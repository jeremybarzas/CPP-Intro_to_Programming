#include <iostream>
using namespace std;

void loopsExercise1();
void loopsExercise2();
void loopsExercise3();
void loopsExercise4();

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

		case '3': loopsExercise3(); break;

		case '4': loopsExercise4(); break;

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

	for (int i = 0; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			cout << i << " FizzBuzz\n";
		}

		else if (i%3 == 0)
		{
			cout << i << " Fizz\n";
		}
		
		else if (i%5 == 0)
		{
			cout << i << " Buzz\n";
		}

		else
		{
			cout << i << "\n";
		}
	}
}

void loopsExercise3()
{
	/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
	Find the sum of all the multiples of 3 or 5 below 1000.*/

	int tmp = 0;
	int sum = 0;

	for (int i = 0; i < 1000; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			tmp = i;
			sum += tmp;
		}
	}
	cout << sum;
}

void loopsExercise4()
{
	//Complete the above 3 exercises using a “while” loop.

	int tmp = 0;
	int sum = 0;
	int i = 0;

	while(i < 1000)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			tmp = i;
			sum += tmp;
		}
		i++;
	}
	cout << sum;
}