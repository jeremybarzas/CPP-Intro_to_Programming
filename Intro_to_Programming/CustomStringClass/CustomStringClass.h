#pragma once

#include <iostream>

using std::cout;
using std::cin;

// creates a class named cString
class cString
{
private:
	// creates a variable to hold size of the array
	int m_size;

	// creates a character pointer
	char* charArray;

	// creates a variable to store an integer to be used as a index in a function
	int theIndex;

public:

	// creates a default constructor
	cString();
	
	// creates a constructor to make a cString that takes an array of characters as a parameter
	cString(char c[]);
	
	// creates a function to print the characters stored in the array "chars"
	void printWord();

	// creates a function to get the size of the cString
	int getSize();

	// creates a function to access a character at a specific index that is passed as a parameter in the array "chars"
	char atIndex(int);

	// creates a function that checks one cString lexographically to another cString
	int compare(cString);

	// creates a function that appends the String literal passed as a parameter to the cString the function was called from
	cString append(char*);

	// creates a function that appends the cString passed as a parameter to the cString the function was called from 
	cString append(cString);

	// creates a function that prepends the cString passed as a parameter to the cString the function was called from 
	cString prepend(cString);

	// creates a function that returns a cString as constant character pointer
	const char* constantChar();

	// creates a function that turns all characters in a cString to lowercase
	cString lowerCase();

	// creates a function that turns all characters in a cString to uppercase
	cString upperCase();

	// creates a function that checks if a sub-string passed as a parameter exists in the cString
	bool subString(cString);

	/*creates a function that checks if a sub-string passed as a parameter
	starting at the index passed as a parameter exists in the cString*/
	bool substringfromIndex(cString, int);

	/*creates a function that checks if a sub-string passed as a parameter exists in the cString and then 
	replaces the found sub-string with the cString passed as the second parameter*/
	cString replaceSubstring(cString, cString);
};

void test1();