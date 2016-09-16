#pragma once

#include <iostream>
#include <stdlib.h>
#include <string>

using std::string;
using std::cout;
using std::cin;

// creates a class named cString
class cString
{
private:
	// creates a variable to hold size of the array
	int m_size;

	// creates a character pointer
	char *chars;

public:

	int theIndex;

	// creates a default constructor
	cString::cString() {};

	// creates a constructor to make a cString that takes an array of characters as a parameter
	cString::cString(char c[])
	{
		// counting the amount of characters passed into the constructor
		for (m_size = 0; c[m_size] != 0;)
		{
			// incrementing the size by 1 for each character passed into the constructor
			m_size++;
		}

		/*assigning the private variable "chars" to a new character array
		of the size of the amount of characters passed into the constructor*/
		this->chars = new char[m_size];

		// assigning the characters passed into the constructor to the private variable chars
		this->chars = c;
	}

	// creates a function to print the characters stored in the array "chars"
	void printWord()
	{
		// loops through the array "chars"
		for (int i = 0; i < m_size; i++)
		{
			// prints each character to the console
			printf("%c", chars[i]);
		}
		// prints a double space to the console for formatting
		printf("\n\n");
	}

	// creates a function to get the size of the cString
	int cString::sizeOf()
	{
		// returns the size of the cString
		return m_size;
	}

	// creates a function to access a character at a specific index that is passed as a parameter in the array "chars"
	char cString::atIndex(int i)
	{
		// creates a variable of type character and assigns it the value store at the specific index 
		char temp = chars[i];

		// returns the "temp" char variable
		return temp;
	}

	// creates a function that checks one cString lexographically to another cString
	int cString::compare(cString c)
	{
		// creates a variable to use a an interatinig index
		int i = 0;

		// creates a variable to store the result of the function
		int result = 0;

		while (true)
		{
			// checks to see if the values at each index are the same
			if (chars[i] == c.chars[i])
			{
				// assigns "result" to 0 and breaks the loop
				result = 0;
				break;
			}

			// checks to see if the values of the first word are greater than the second at each index
			else if (chars[i] > c.chars[i])
			{
				// assigns "result" to 1 and breaks the loop
				result = 1;
				break;
			}

			// checks to see if the values of the first word are lesser than the second at each index
			else if (chars[i] < c.chars[i])
			{
				// assigns "result" to -1 and breaks the loop
				result = -1;
				break;
			}

			// increases "i" to interate through each index
			else
			{
				i++;
			}
		}

		// returns the result of the function
		return result;
	}

	// creates a function that appends the cString passed as a parameter to the cString the function was called from 
	cString cString::append(cString other)
	{
		// creates a variable and assigns it the sum of both cStrings size
		int newSize = this->sizeOf() + other.sizeOf();

		// creates a pointer of type character and assigns it to a new character array of the size of "newSize"
		char * newWord = new char[newSize];

		// loops through "newWord" and the first word 
		for (int i = 0; i < this->sizeOf(); i++)
		{
			// assigns the index of "newWord" to the value of the index of the first word 
			newWord[i] = this->chars[i];
		}

		// loops through "newWord" and the second word
		// starts at the next index in "newWord" after the last character assign by the previous loop 
		for (int j = this->sizeOf(); j < other.sizeOf() + this->sizeOf(); j++)
		{
			// creates a variable to be used as the index to interate through the second word
			int offset = j - this->sizeOf();

			// assigns the index of "newWord" to the value stored at the index of the second word
			newWord[j] = other.chars[offset];

		}
		// assigns the last index "newWord" to the terminating character
		newWord[newSize] = '\0';

		// returns a new cString that is assigned the values store in "newWord" 
		return cString(newWord);
	}

	// creates a function that prepends the cString passed as a parameter to the cString the function was called from 
	cString cString::prepend(cString other)
	{
		// creates a variable and assigns it the sum of both cStrings size
		int newSize = this->sizeOf() + other.sizeOf();

		// creates a pointer of type character and assigns it to a new character array of the size of "newSize"
		char * newWord = new char[newSize];

		// loops through "newWord" and the second word
		for (int i = 0; i < other.sizeOf(); i++)
		{
			// assigns the index of "newWord" to the value stored at the index of the second word
			newWord[i] = other.chars[i];
		}

		// loops through "newWord" and the first word 
		// starts at the next index in "newWord" after the last character assign by the previous loop 
		for (int j = other.sizeOf(); j < this->sizeOf() + other.sizeOf(); j++)
		{
			// creates a variable to be used as the index to interate through the first word
			int offset = j - other.sizeOf();

			// assigns the index of "newWord" to the value stored at the index of the first word
			newWord[j] = this->chars[offset];
		}

		// assigns the last index "newWord" to the terminating character
		newWord[newSize] = '\0';

		// returns a new cString that is assigned the values store in "newWord" 
		return cString(newWord);
	}

	// creates a function that turns all characters in a cString to lowercase
	cString cString::lowerCase()
	{
		/*creates a pointer of type character and assigns it to a new character array
		of the same size as the cString it was called from*/
		char * newWord = new char[this->sizeOf()];

		// creates a variable to store the ascii value of a character
		int assKey = 0;

		// loops through the character array
		for (int i = 0; i < this->sizeOf(); i++)
		{
			// checks to see if the character is uppercase
			if (this->chars[i] >= 65 && this->chars[i] <= 90)
			{
				// assigns "assKey" to the value of an index of "chars" casted as an integer
				assKey = (int)chars[i];

				// assigns the value of "assKey" to its value plus 32 which will give the ascii value of the uppercase version of the character
				assKey = assKey + 32;

				// assigns the index of "newWord" to the value of "assKey" casted as a character
				newWord[i] = (char)assKey;
			}

			// checks to see if the character is lowercase
			else if (this->chars[i] >= 97 && this->chars[i] <= 122)
			{
				//assigns index of "newWord" to the value of the index of "chars"
				newWord[i] = chars[i];
			}

		}

		// assigns the last index "newWord" to the terminating character
		newWord[this->sizeOf()] = '\0';

		// returns a new cString that is assigned the values store in "newWord" 
		return cString(newWord);
	}

	// creates a function that turns all characters in a cString to uppercase
	cString cString::upperCase()
	{
		/*creates a pointer of type character and assigns it to a new character array
		of the same size as the cString it was called from*/
		char * newWord = new char[this->sizeOf()];

		// creates a variable to store the ascii value of a character
		int assKey = 0;

		// loops through the character array
		for (int i = 0; i < this->sizeOf(); i++)
		{
			// checks to see if the character is lowercase
			if (this->chars[i] >= 97 && this->chars[i] <= 122)
			{
				// assigns "assKey" to the value of an index of "chars" casted as an integer
				assKey = (int)chars[i];

				// assigns the value of "assKey" to its value minus 32 which will give the ascii value of the uppercase version of the character
				assKey = assKey - 32;

				// assigns the index of "newWord" to the value of "assKey" casted as a character
				newWord[i] = (char)assKey;
			}

			// checks to see if the character is uppercase
			else if (this->chars[i] >= 65 && this->chars[i] <= 90)
			{
				//assigns index of "newWord" to the value of the index of "chars"
				newWord[i] = chars[i];
			}
		}

		// assigns the last index "newWord" to the terminating character
		newWord[this->sizeOf()] = '\0';

		// returns a new cString that is assigned the values store in "newWord" 
		return cString(newWord);
	}

	// creates a function that checks if a sub-string passed as a parameter exists in the cString
	bool cString::subString(cString other)
	{
		// creates a boolean variable to store whether the sub-string was found
		bool subFound = false;

		cString sub = cString(other.chars);

		int patternLen = sub.sizeOf();

		for (int i = 0; i < this->sizeOf(); i++)
		{
			if (subFound)
			{
				return true;
			}
		
			//match on first letter
			if (this->chars[i] == sub.chars[0])
			{
				//start checking b/c we matched first letter
				for (int j = 0; j < patternLen; j++)
				{
					//the index we are at + the thing we want to iterate through
					if (this->chars[i + j] == sub.chars[j])
					{
						subFound = true;
						theIndex = i;
					}
					else
					{
						subFound = false;
					}

				}
			}
		}

		// returns "subFound"
		return subFound;
	}

	/*creates a function that checks if a sub-string passed as a parameter
	starting at the index passed as a parameter exists in the cString*/
	bool cString::substringfromIndex(cString other, int n)
	{
		// creates a boolean variable to store whether the sub-string was found
		bool subFound = false;

		// loops through the cString starting at the index that was passed as a parameter
		for (int i = n; i < this->sizeOf(); i++)
		{
			/*checks to see if the value at the index of "chars" in the cString is the same
			as the value at the index of "chars" in the sub-string*/
			if (this->chars[i] == other.chars[0])
			{
				// loops through sub-string
				for (int j = 0; j < other.sizeOf(); j++, i++)
				{
					/*checks to see if the value at the index of "chars" in the cString is the same
					as the value at the index of "chars" in the sub - string*/
					if (this->chars[i] == other.chars[j])
					{
						//assigns "subFound" to true
						subFound = true;
					}

					// if the condition is not met then it executes these lines
					else
					{
						// returns "subFound" assigned as false to end the function
						return subFound = false;
					}
				}
			}
		}

		// returns "subFound"
		return subFound;
	}

	cString cString::replaceSubstring(cString searchFor, cString replaceWith)
	{
		char * c = this->chars;
		bool found = this->subString(searchFor);


		int newSize = this->sizeOf() - searchFor.sizeOf() + replaceWith.sizeOf();


		char * newWord = new char[newSize];
		//start at beginning
		for (int i = 0; i < theIndex; i++)
			newWord[i] = this->chars[i];
		
		int j = 0;
		//start at what we put in
		for (int i = theIndex; i < replaceWith.sizeOf() + theIndex; i++)
		{

			newWord[i] = replaceWith.chars[j];
			j++;
		}

		//start at both things we put in
		int k = newSize - (theIndex + searchFor.sizeOf());
		for (int i = theIndex + replaceWith.sizeOf(); i < newSize - (theIndex + searchFor.sizeOf()); i++)
		{
			newWord[i] = this->chars[k];
			k++;
		}

		return cString(newWord);
	}
};