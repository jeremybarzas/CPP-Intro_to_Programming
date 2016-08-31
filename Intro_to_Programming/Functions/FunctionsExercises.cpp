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

int SumArray(int array[], int size);

void functionsQuestion8();

int MinInArray(int array[], int size);

void functionsQuestion9();

void MultiplyByIndex(int inputArray[], int outputArray[], int size);

void functionsQuestion10();

void addtwoArrays(int inputArray1[], int inputArray2[], int outputArray[], int size);

void functionsQuestion11();

void modifyArray(int a[], int size);

void functionsQuestion12();

void findNum();

void functionsQuestion13();



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

		case 8: functionsQuestion8(); break;

		case 9: functionsQuestion9(); break;

		case 10: functionsQuestion10(); break;

		case 11: functionsQuestion11(); break;

		case 12: functionsQuestion12(); break;

		case 13: functionsQuestion13(); break;

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

int SumArray(int array[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}

	return sum;
}

void functionsQuestion8()
{
	/*Write a function that takes as its parameters an array of integers and the size of the array
		and returns the sum of the values in the array.
		Use this code to test the function :
	#include <iostream>
	//Your function called SumArray goes here
	int main()
	{
		int integer_array[5] = { 7, 3, 2, 4, 9 };
		int result = SumArray(integer_array, 5); //result = 25
		std::cout << result << std::endl;
	}*/	int integer_array[] = { 7, 3, 2, 4, 9 };
	int result = SumArray(integer_array, 5);

	cout << "The sum of all the elements in the array is: " << result << "\n\n";
}

int MinInArray(int array[], int size)
{
	int smallest = array[0];

	for (int i = 0; i <= 6; i++)
	{
		if (array[i] < smallest)
			smallest = array[i];
	}

	return smallest;
}

void functionsQuestion9()
{
	/*Write a function that takes as its parameter an array of integers and the size of the array
		and returns the minimum of the values in the array.
		Use this code to test the function :		#include <iostream>
//Your function called MinInArray goes here
int main()
{
 int integer_array[7] = {10, 15, 7, 4, 13, 19, 8};
 int result = MinInArray(integer_array, 7); //result = 4
 std::cout << result << std::endl;
}*/
	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
	int result = MinInArray(integer_array, 7);

	cout << "The smallest value in the array is: " << result << "\n\n";
}

void MultiplyByIndex(int inputArray[], int outputArray[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			outputArray[j] = (inputArray[j] * j);
		}
		cout << "outputArray's index of " << i << " has a value of " << outputArray[i] << ".\n\n";
	}
}

void functionsQuestion10()
{
	/*Write a function that takes as its parameter an array called input_array of integers, the
		array size and a second array of the same size called output_array.Fill each element in the
		second array to be the value in the same index of input_array multiplied by its index in the
		array.
		Use this code to test your function :
	#include <iostream>
	//Your function called MultiplyByIndex goes here
	int main()
	{
		int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
		int output_array[7] = {};
		MultiplyByIndex(integer_array, output_array, 7);
		
		//output_array should be {0, 15, 14, 12, 52, 95, 48};
		return 0;
	}*/
	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
	int output_array[7] = {};
	MultiplyByIndex(integer_array, output_array, 7);
}

void addtwoArrays(int inputArray1[], int inputArray2[], int outputArray[], int size)
{
	for (int i  = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			outputArray[j] = inputArray1[j] + inputArray2[j];
		}
		cout << "outputArray's index of " << i << " has a value of " << outputArray[i] << ".\n\n";
	}
}

void functionsQuestion11()
{
	/*Write a function that takes as its parameters two input arrays of integers, an integer for
		their size and an output array.Set the value at each index to the sum of the corresponding
		two elements of the input arrays at the same index.Assume the three arrays are of equal
		length.Write your own code for testing this function.*/

	int inputArray1[5] = { 1, 2, 3, 4, 5 };
	int inputArray2[5] = { 6, 7, 8, 9, 10 };
	int outputArray[5];

	addtwoArrays(inputArray1, inputArray2, outputArray, 5);
}

void modifyArray(int a[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		a[i] += sum;
		sum = a[i];
		
		cout << "The array index " << i << " modified value is: " << a[i] << endl;
	}
}

void functionsQuestion12()
{
	/*Write a function that takes as its parameters an array called array_input of integers and the
		size of the array and modifies the given array so that it contains a running sum of its
		original values. For example, if the array originally had the values { 3,2,4,7 }, after running
		your function that array would instead contain { 3,5,9,16 }, and if you ran it another time
		passing the modified array in again, you'd have {3,8,17,33}. Write your own code for testing
		this function.*/
	int array_input[4] = { 3, 2, 4, 7 };

	for (int i = 0; i < 4; i++)
	{
		cout << "The array index " << i << " before modifing is: " << array_input[i] << endl;
	}

	for (int i = 0; i < 4; i++)
	{
		modifyArray(array_input, 4);
	}
}

void findNum()
{



}

void functionsQuestion13()
{
	/*Write a function that searches for a particular number in an array.The function should
		have three parameters : the array, the array size, and the number to be found.If the
		number is in the array, the function should return the position of the number in the array.
		If the number isn’t found, the function should return -1. In the case that the desired
		number appears more than once in the array, the function should return the position of
		the first occurrence.Write your own code to test this function.*/	
	/*srand(time(NULL));
	rand() % 20 + 1;*/

	int arrayofShit[10];

	for (int i = 0; i < 10; i++)
	{
		arrayofShit[i] = i;
		cout << "Array index " << i << " contains: " << arrayofShit[i] << endl;
	}
}
