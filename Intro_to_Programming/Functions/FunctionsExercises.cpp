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

float smaller(int, int);

float smaller(int, int, int);

int CoinToss(int a);

int SumTo(int N);

int SumArray(int array[], int size);

int MinInArray(int array[], int size);

void MultiplyByIndex(int inputArray[], int outputArray[], int size);

void addtwoArrays(int inputArray1[], int inputArray2[], int outputArray[], int size);

void modifyArray(int a[], int size);

int Split(int[], int, int[], int[]);

int powerofy(int, int);

void lookandsay(int[], int);

void RockPaperScissors();

void functionsQuestion1();

void functionsQuestion2();

void functionsQuestion3();

void functionsQuestion4();

void functionsQuestion5();

void functionsQuestion6();

void functionsQuestion7();

void functionsQuestion8();

void functionsQuestion9();

void functionsQuestion10();

void functionsQuestion11();

void functionsQuestion12();

void functionsQuestion13();

void functionsQuestion14();

void functionsQuestion15();

void functionsQuestion16();

void functionsQuestion17();


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

		case 2: functionsQuestion2(); break;

		case 3: functionsQuestion3(); break;

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

		case 14: functionsQuestion14(); break;

		case 15: functionsQuestion15(); break;

		case 16: functionsQuestion16(); break;

		case 17: functionsQuestion17(); break;

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

float smaller(int a, int b)
{
	int nums[2] = { a, b };

	float smallest = nums[0];

	for (int i = 0; i < 2; i++)
	{
		if (nums[i] < smallest)
		{
			smallest = nums[i];
		}
	}

	return smallest;
}

float smaller(int a, int b, int c)
{
	int nums[3] = { a, b, c };

	float smallest = nums[0];

	for (int i = 0; i < 3; i++)
	{
		if (nums[i] < smallest)
		{
			smallest = nums[i];
		}
	}

	return smallest;
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

int SumArray(int array[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}

	return sum;
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

void addtwoArrays(int inputArray1[], int inputArray2[], int outputArray[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			outputArray[j] = inputArray1[j] + inputArray2[j];
		}
		cout << "outputArray's index of " << i << " has a value of " << outputArray[i] << ".\n\n";
	}
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

int Split(int input[], int size, int outputPos[], int outputNeg[])
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < size)
	{
		if (input[i] > 0)
		{
			outputPos[j] = input[i];
			j++;
		}

		if (input[i] < 0)
		{
			outputNeg[k] = input[i];
			k++;
		}

		i++;
	}

	return j;
}

int powerofy(int x, int y)
{
	int output = 1;

	for (int i = 0; i < y; i++)
	{
		output *= x;
	}

	return output;
}

void lookandsay(int nums[], int size)
{
	int number = 0;
	int count = 0;

	for (int i = 0; i < size;)
	{
		number = nums[i];

		if (number == nums[i])
		{
			for (int j = i; number == nums[i]; j++)
			{
				count++;
				i++;
			}

			if (i != size)
			{
				cout << count << ", " << number << ", ";
			}

			else 
			{
				cout << count << ", " << number;
			}
		}
		count = 0;
	}
}

void RockPaperScissors()
{
	srand(time(NULL));

	bool runningMan = true;
	int input;

	int rps = 0;
	int playerChoice = -1;

	while (runningMan)
	{
		cout << "Enter a 4 at any time to quit playing.\n\n";
		cout << "1. Rock\n\n2. Paper\n\n3. Scissors\n\n";
		cout << "Choose rock, paper, or scissors: ";

		cin >> input;
		while (!cin)
		{
			cin.clear();
			cin.ignore();
			cin >> input;
		}
		cout << "\n";

		switch (input)
		{
		case 1:
			playerChoice = input;
			rps = rand() % 3 + 1;
			break;

		case 2:
			playerChoice = input;
			rps = rand() % 3 + 1;
			break;

		case 3:
			playerChoice = input;
			rps = rand() % 3 + 1;
			break;

		case 4: runningMan = false;
		}

		//===================================================//

		if (playerChoice == 1)
		{
			cout << "You chose rock\n\n";
		}

		if (playerChoice == 2)
		{
			cout << "You chose paper\n\n";
		}

		if (playerChoice == 3)
		{
			cout << "You chose scissors\n\n";
		}

		//===================================================//

		if (rps == 1)
		{
			cout << "Computer chose rock.\n\n";
		}

		else if (rps == 2)
		{
			cout << "Computer chose paper.\n\n";
		}

		else if (rps == 3)
		{
			cout << "Computer chose scissors.\n\n";
		}

		//===================================================//

		if (playerChoice == rps)
		{
			cout << "Its a tie!\n\n";
		}
		if (playerChoice == 1 && rps == 3)
		{
			cout << "Rock beats scissors, you win!!!\n\n";
		}
		if (playerChoice == 1 && rps == 2)
		{
			cout << "Paper beats rock, you lose...\n\n";
		}
		if (playerChoice == 2 && rps == 1)
		{
			cout << "Paper beats rock, you win!!!\n\n";
		}
		if (playerChoice == 2 && rps == 3)
		{
			cout << "Scissors beat paper, you lose...\n\n";
		}
		if (playerChoice == 3 && rps == 2)
		{
			cout << "Scissors beats paper, you win!!!\n\n";
		}
		if (playerChoice == 3 && rps == 1)
		{
			cout << "Rock beats scissors, you lose...\n\n";
		}

		system("pause");
		system("cls");
	}

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

void functionsQuestion2()
{
	/*Write a function that returns the smaller of two floats that are passed to it :
	You should make a program that asks the user for two different numbers such that it*/

	float a;
	float b;

	cout << "Enter the first float value: ";
	cin >> a;

	cout << "\nEnter the second float value: ";
	cin >> b;

	cout << "The smaller number is: " << smaller(a, b);
}

void functionsQuestion3()
{
	/*Add another function with the same name as the one you wrote in question 2, but with
	three floats instead of two.What is this language feature called ?*/	float a;
	float b;
	float c;

	cout << "Enter the first float value: ";
	cin >> a;

	cout << "\nEnter the second float value: ";
	cin >> b;

	cout << "\nEnter the third float value: ";
	cin >> c;

	cout << "The smaller number is: " << smaller(a, b, c);
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
	}
	*/

	cout << "The error in the first function is that is does not return anything.\n\n";
	cout << "The error in the second function is it cannot assign a value to the varible n because it is not a variable that was created in the function it is an arbitrary varaible named creaeted for the argument.\n\n";
	cout << "The error in the third function is that the function is being called before it has been declared.\n";
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
	}*/

	int integer_array[] = { 7, 3, 2, 4, 9 };
	int result = SumArray(integer_array, 5);

	cout << "The sum of all the elements in the array is: " << result << "\n\n";
}

void functionsQuestion9()
{
	/*Write a function that takes as its parameter an array of integers and the size of the array
		and returns the minimum of the values in the array.
		Use this code to test the function :
		#include <iostream>
//Your function called MinInArray goes here
int main()
{
 int integer_array[7] = {10, 15, 7, 4, 13, 19, 8};
 int result = MinInArray(integer_array, 7); //result = 4
 std::cout << result << std::endl;
}
*/

	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };
	int result = MinInArray(integer_array, 7);

	cout << "The smallest value in the array is: " << result << "\n\n";
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

void functionsQuestion14()
{
	/*Write a function named Split that accepts one input array of integers, an integer for the
	size of the input array, and two output arrays.All numbers in the input array that are
	positive are copied into the first output array and all numbers in the input array that are
	negative are copied into the second output array.The function should return how many
	numbers were copied into the first output array.Write your own code to test this function.*/

	const int size = 5;

	int inputArry[size] = { 1, -2, 3, -4, 5 };

	int outputArry1[size];
	int outputArry2[size];

	cout << "The amount of numbers copied to the first array is: " << Split(inputArry, size, outputArry1, outputArry2);
}

void functionsQuestion15()
{
	/*Write a function that calculates and then returns x to the power of y.*/
	int x = 5;
	int y = 6;

	cout << powerofy(x, y);
}

void functionsQuestion16()
{
	/*Write a function that takes in an array of integers, and the size of the array.The function
	should print out the “look and say” sequence for the array.The look and say sequence
	works by printing out how many of the same number there are in a row followed by that number.
		
	For example, if the array was{ 1, 1, 1, 1 } the function would print out “4, 1” because there are four ones.

	If the array was{ 1, 2, 2, 2, 3, 4 } the function would print out “1, 1, 3, 2, 1, 3, 1, 4” because there
	is “one 1, three 2s, one 3, one 4”.
	
	If the array is{ 1,2,2,1,5,1,1,7,7,7,7,1,1,1,1,1,1,1,1 } the function should print out
	“1, 1, 2, 2, 1, 1, 1, 5, 2, 1, 4, 7, 8, 1”
		Write your own code to test the function.*/
	const int size = 14;
	
	int nums[size] = { 1,2,2,3,3,3,4,4,4,4,1,3,2,4 };

	lookandsay(nums, size);
}

void functionsQuestion17()
{
	/*Write a program that lets the user play the game of Rock, Paper, Scissors against the
		computer.The program should work as follows :
	1. When the program begins, a random number in the range of 1 - 3 is generated.If
		the number is 1, then the computer has chosen rock.If the number is 2, then the
		computer has chosen paper.So if the number is 3 then the computer has chosen
		scissors.
		2. The user enters their choice of “rock”, “paper” or “scissors”
		3. The computer’s choice is displayed.
		4. A winner is selected according to the following rules :
	1. Rock beats scissors, scissors beats paper, paper beats rock
		2. If there is a tie then the game must be replayed
		5. Make sure to break the game up into functions to perform each task.Make sure to
		look for any code that is repeated, and break it out into a function.*/

	RockPaperScissors();

}