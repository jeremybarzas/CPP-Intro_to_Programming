#pragma once
#include <iostream>
#include <string>

using namespace std;

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


// Question 1
float Sumby5(float a, float b, float c)
{
	float sum = a + b + c;

	sum = sum * 5;

	return sum;
}

// Question 2
void EvenPopulate(int *a, int size)
{
	for (int i = 0, j = 0; i < size; i++)
	{
		a[i] = j;
		j += 2;
	}
}

// Question 3
void ReverseString(char a[])
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

// Question 4
class Cat
{
	char m_name;

public:
	Cat() {};

	void NameMe(char a)
	{
		m_name = a;
	}
};

// Question 5
int MostCommon(int * ptr, int size)
{	
	int curr = 0;
	int currcnt = 0;

	int mstcmn = 0;
	int mstcmncnt = 0;

	for (int i = 0; i < size; i++)
	{
		curr = ptr[i];
		
		for (int i = 0; i < size; i++)
		{
			if (ptr[i] == curr)
			{
				currcnt++;
			}
			if (currcnt > mstcmncnt)
			{
				mstcmn = curr;
				mstcmncnt = currcnt;
			}
		}

		currcnt = 0;
	}
	
	return mstcmn;
}

// Question 6
void SwapNum(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

// Question 7
void SortStrings(string s[], int size)
{
	int order = 0;

	string tmp;

	for (int i = 0; i < size; i++)
	{
		tmp = s[i];
		
		for (int i = 0, j = 0; i < size; i++)
		{
			if (s[i][i] <= s[j][j])
			{
				s[i] = tmp;
			}
			
		}
	}

}