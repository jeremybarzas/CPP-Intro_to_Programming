/*
You have till the end of the day to complete each of these problems.
You can submit up to 3 times, but you must have an attempted solution for the problem.
You cannot look at you old gist assignments for reference.If you complete the problem and have not received credit for it all ready you will now receive your credit.*/

/*
1.) Create a function that takes in 3 numbers and returns the sum of those numbers multiplied by 5 
(This function should work for both integer and floating point values).*/

/*
2.) Write a function that takes two parameters a pointer to an array and the number of elements then populate the array with all even numbers.*/

/*
3.) Create a function that takes in a character array and reverses the string stored inside of it.*/

/*
4.) Create a Cat class with a private char variable called m_name.
Then create a public constructor that has no arguments.
You will need one more function of return type void called NameMe, this takes in a character as an argument and needs to assign this character to the value of m_name.
Once you have your class created, Create an array of type Cat of size 26.
Then populate the names of these cats each with a different letter of the alphabet starting with capital A and every other cats name should be a lowercase letter(A, b, C, d, E, f, G, ...).
You cannot use a for loop and you cannot print to the console.*/

/*
5.) Create a function that takes in two arguments, One that points to an array of integers and one for the size of the array.
This function will return the value in the array that appears the most times*/

/*
6.) Create a function that swaps the value of two integers without the use of a temporary variable.*/

/*
7.) Create an array of strings then sort each string in alphabetical order.*/


#pragma once

#include <iostream>

using std::string;

class GistTest
{
public:
	GistTest() {};
	~GistTest() {};

	// Question 1
	int SumBy5(int a, int b, int c)
	{
		int product = (a + b + c) * 5;

		return product;
	}
	
	float SumBy5(float a, float b, float c)
	{
		float product = (a + b + c) * 5;

		return product;
	}

	// Question 2
	int * EvenArray(int * array, int size)
	{
		for (int i = 0, j = 0; i < size; i++)
		{
			array[i] = j;
			j = j + 2;
		}

		return array;
	}

	// Question 3
	void RevrsArry(char a[])
	{
		char tmp[11];

		for (int i = 0; i <= 10; i++)
		{
			tmp[i] = a[i];
		}
		
		for (int i = 0, j = 10; i <= 10; i++, j--)
		{
			a[i] = tmp[j];
		}
	}

	// Question 5
	int MostCommonInt(int * array, int size)
	{
		int commonInt = 0;
		int commonCount = 0;

		int currentInt = 0;
		int currentCount = 0;

		int count = 0;

		for (int i = 0; i < size; i++)
		{
			currentInt = array[i];

			for (int j = 0; j < size; j++)
			{
				if (currentInt == array[j])
				{
					currentCount++;
				}
				if (currentCount > commonCount)
				{
					commonInt = currentInt;
					commonCount = currentCount;
				}
			}
			currentCount = 0;
		}

		return commonInt;
	}

	// Question 6
	int SwapNum(int a, int b)
	{
		return 0;
	}
};

// Question 4
class Cat
{
private:
	char m_name;

public:
	Cat() {};

	void NameMe(char a)
	{
		m_name = a;
	}
};