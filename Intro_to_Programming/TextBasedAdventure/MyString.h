#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void test1();

class MyString
{

private:
	char* data; //The word we will store for our string

public:
	MyString(); //Default constructor

	MyString(char*); //Construct that will set the value to be stored in are word variable

	int Length(); //Returns the length of are string.

	char GetCharacter(int); //Gets a character in the word at certain index.

	bool Compare(MyString); //Compares to strings to see if two strings are the same or different

	void Append(MyString); //Adds a string to this instance of the string class.

	void Prepend(MyString); //Adds a string to this instance of the string class.

	const char* CStyle(); //Returns the string as a C-Style string

	MyString ToLower(); //Converts the string to all lower case

	MyString ToUpper(); //Convert the string to all upper case

	bool FindSubString(MyString); //Tries to find a sub string inside of this instance of the string class

	bool FindSubString(MyString, int); //Tries to to find substring inside this instance of the string starting at a certain index

	void ReplaceSubString(MyString, MyString); //Replace a substring in the word with a new string
};

#endif // _MYSTRING_H_