#include <iostream>
#include <time.h>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;

void arrayQuestion1();
void arrayQuestion2();
void arrayQuestion3();
void arrayQuestion4();
void arrayQuestion5();
void arrayQuestion6();
void arrayQuestion7();
void arrayQuestion8();
void arrayQuestion9();

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

			case '6': arrayQuestion6(); break;

			case '7': arrayQuestion7(); break;

			case '8': arrayQuestion8(); break;

			case '9': arrayQuestion9(); break;

			default: break;
		}
	}

	system("pause");

	return 0;
}

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
	/*Given the following array definition:
	int values[] = { 2, 6, 10, 14 };
	What does each of the following display ?
		a) cout << values[2]
		b) cout << ++values[0];
	c) cout << values[1]++;
	d) x = 2;
	cout << values[++x];
	e) cout << values[4];*/

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
	/*Write a for loop to initialize the following array(int data[10]) with the values 10, 9, 8…(Etc)*/

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
	/*Create a program that asks for 5 numbers from the user, and store them in an array.Print
		out the numbers in reverse order*/

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
	/*Write a program that lets the user enter 10 values into an array.The program should then
		display the largest and smallest values stored in the array.*/

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

	int largest = 0;
	int smallest = 0;

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

void arrayQuestion6()
{
	//Create a program that creates a small 3x3 array of integers.
	//Use a nested for loop to initialise the numbers 1 - 9. Output the numbers in a grid format.

	int smallArray[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			smallArray[i][j] = ((i * j) + (i + j) + 1);
			cout << "(" << i << ", " << j << ")" << " = " << smallArray[i][j] << " ";
		}
		cout << endl;
	}
}

void arrayQuestion7()
{
	/*An application uses a two dimensional array defined as follows :
	int days[29][5];
	Write code that sums each row in the array and displays the results.
	Write code that sums each column in the array and displays the results.*/

	int days[29][5];

	for (int i = 0; i < 29; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			days[i][j] = ((i * j) + (i + j) + 1);
			cout << "(" << i << ", " << j << ")" << " = " << days[i][j] << " ";
		}
		cout << endl;
	}

	int sumRows = 0;
	int sumCols = 0;

	for (int i = 0; i < 29; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			sumRows = sumRows + days[i][j];
		}
		cout << "row sum" << sumRows << endl;
		sumRows = 0;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 29; j++)
		{
			sumCols = sumCols + days[j][i];
		}
		cout << "coloum sum: " << sumCols << endl;
		sumCols = 0;
	}
}

void arrayQuestion8()
{
	/*Create a program that declares an array of 5 integer values. These values will represent the
	health of 5 characters. Initialise the values all to 100. Your program is to ask the user to
	enter a number(0 to 4) to select a character that is to be attacked by a monster. Each attack
	deals 40 damage per attack. If a player’s health gets below 0 then should not be able to be
	attacked. Your program should simulate 5 attacks. After the attacks have finished, output
	the parties’ remaining health to the console.
	CHALLENGE: Research random number generation and modify your program so that random
	damage is dealt with each attack.*/

	srand(time(NULL));
	int character[5] = {100, 100, 100, 100, 100};
	int input;
	int atkCount = 0;
	int atkDmg;

	while (atkCount <= 4)
	{
		cout << "Enter a number from 0 - 4 to select the character to be attacked." << endl;
		cin >> input;
		cout << endl;

		if (input > 4 || input < 0)
		{
			cout << "That is not a valid character selection...\n\n";
		}

		else if (character[input] > 0)
		{
			atkCount = atkCount + 1;
			atkDmg = rand() % 100 + 1;  //length of 100 starting at 1.
			character[input] = (character[input] - atkDmg);
			cout << atkDmg << " Was dealt to character " << input << "...\n\n";
		}
		
		else
		{
			cout << "Character " << input << " is dead..." << endl;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "Character " << i << "'s remaining health is: " << character[i] << "\n\n";
	}
}

void arrayQuestion9()
{
	/*Daenerys Targaryen wants to keep track of how many kilos of food her three dragons eat
	each day during a typical week. Write a program that stores this information in a 2
	dimensional 3 x 7 array, where each row represents a different dragon and each column
	represents a different day of the week. The program should first have Dany input the user
	for each dragon. Then it should create a report that includes the following information :
	-Average amount of food eaten per day by all the dragons together
	- average amount of food eaten per day by any one dragon
	- the greatest amount of food eaten during one day and which dragon that was
	- the least amount of food eaten during one day and which dragon that was*/

	int dragons[3][7];
	srand(time(NULL));

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			dragons[i][j] = rand() % 100 + 1;
			cout << "Dragon " << i << " on day " << j << " has eaten " << dragons[i][j] << " kilos of food.\n\n";
		}
	}

	int avgfoodperDragon = 0;
	int foodperDragon = 0;

	int avgfoodperDay = 0;
	int foodperDay = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			foodperDragon = foodperDragon + dragons[i][j];
			avgfoodperDragon = foodperDragon / 7;
		}
		cout << "Average food eaten by dragon " << i << ": " << avgfoodperDragon << "\n\n";
		foodperDragon = 0;
		avgfoodperDragon = 0;
	}

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			foodperDay = foodperDay + dragons[j][i];
			avgfoodperDay = foodperDay / 3;
		}
		cout << "Average food eaten on day " << i << ": " << avgfoodperDay << "\n\n";
		foodperDay = 0;
		avgfoodperDay = 0;
	}
	
	int fatDragon = 0;
	int skinnyDragon = 0;

	for (int i = 0; i < 7; i++)
	{
		if ((dragons[0][i] > dragons[1][i]) && (dragons[0][i] > dragons[2][i]))
		{
			fatDragon = 0;
		}
		else if ((dragons[1][i] > dragons[0][i]) && (dragons[1][i] > dragons[2][i]))
		{
			fatDragon = 1;
		}
		else if ((dragons[2][i] > dragons[0][i]) && (dragons[2][i] > dragons[1][i]))
		{
			fatDragon = 2;
		}

		if ((dragons[0][i] < dragons[1][i]) && (dragons[0][i] < dragons[2][i]))
		{
			skinnyDragon = 0;
		}
		else if ((dragons[1][i] < dragons[0][i]) && (dragons[1][i] < dragons[2][i]))
		{
			skinnyDragon = 1;
		}
		else if ((dragons[2][i] < dragons[0][i]) && (dragons[2][i] < dragons[1][i]))
		{
			skinnyDragon = 2;
		}

		cout << "Most food eaten on day: " << i << " was by dragon: " << fatDragon << "\n";
		cout << "Least food eaten on day: " << i << " was by dragon: " << skinnyDragon << "\n\n";
	}
}