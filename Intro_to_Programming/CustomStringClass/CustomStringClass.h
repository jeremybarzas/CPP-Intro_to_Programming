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
	cString() : m_size(0), charArray(nullptr), theIndex(-1) 
	{
	
	};

	// creates a constructor to make a cString that takes an array of characters as a parameter
	cString(char c[])
	{
		m_size = 0;
		charArray = nullptr;
		theIndex = -1;

		// counting the amount of characters passed into the constructor
		for (int i = 0; c[i] != '\0'; i++)
		{
			// incrementing the size by 1 for each character passed into the constructor
			m_size++;
		}

		/*assigning the private variable "chars" to a new character array
		of the size of the amount of characters passed into the constructor*/
		this->charArray = new char[m_size];

		// assigning the characters passed into the constructor to the private variable chars
		this->charArray = c;
	}

	// creates a function to print the characters stored in the array "chars"
	void printWord()
	{
		// loops through the array "chars"
		for (int i = 0; i < this->getSize(); i++)
		{
			// prints each character to the console
			printf("%c", this->charArray[i]);
		}
		// prints a double space to the console for formatting
		printf("\n\n");
		
		return;
	}

	// creates a function to get the size of the cString
	int getSize()
	{
		// returns the size of the cString
		return m_size;
	}

	// creates a function to access a character at a specific index that is passed as a parameter in the array "chars"
	char atIndex(int i)
	{
		// creates a variable of type character and assigns it the value store at the specific index 
		char temp = charArray[i];

		// returns the "temp" char variable
		return temp;
	}

	// creates a function that checks one cString lexographically to another cString
	int compare(cString c)
	{
		// creates a variable to use a an interatinig index
		int i = 0;

		// creates a variable to store the result of the function
		int result = 0;

		while (true)
		{
			// checks to see if the values at each index are the same
			if (charArray[i] == c.charArray[i])
			{
				// assigns "result" to 0 and breaks the loop
				result = 0;
				break;
			}

			// checks to see if the values of the first word are greater than the second at each index
			else if (charArray[i] > c.charArray[i])
			{
				// assigns "result" to 1 and breaks the loop
				result = 1;
				break;
			}

			// checks to see if the values of the first word are lesser than the second at each index
			else if (charArray[i] < c.charArray[i])
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

	cString append(char * otherc)
	{
		cString other = cString(otherc);
		// creates a variable and assigns it the sum of both cStrings size
		int newSize = this->getSize() + other.getSize();

		// creates a pointer of type character and assigns it to a new character array of the size of "newSize"
		char * newWord = new char[newSize];

		// loops through "newWord" and the first word 
		for (int i = 0; i < this->getSize(); i++)
		{
			// assigns the index of "newWord" to the value of the index of the first word 
			newWord[i] = this->charArray[i];
		}

		// loops through "newWord" and the second word
		// starts at the next index in "newWord" after the last character assign by the previous loop 
		for (int j = this->getSize(); j < other.getSize() + this->getSize(); j++)
		{
			// creates a variable to be used as the index to interate through the second word
			int offset = j - this->getSize();

			// assigns the index of "newWord" to the value stored at the index of the second word
			newWord[j] = other.charArray[offset];
		}

		// assigns the last index "newWord" to the terminating character
		newWord[newSize] = '\0';
		
		// returns a new cString that is assigned the values store in "newWord" 
		return cString(newWord);
	}

	// creates a function that appends the cString passed as a parameter to the cString the function was called from 
	cString append(cString other)
	{
		// creates a variable and assigns it the sum of both cStrings size
		int newSize = this->getSize() + other.getSize();

		// creates a pointer of type character and assigns it to a new character array of the size of "newSize"
		char * newWord = new char[newSize];

		// loops through "newWord" and the first word 
		for (int i = 0; i < this->getSize(); i++)
		{
			// assigns the index of "newWord" to the value of the index of the first word 
			newWord[i] = this->charArray[i];
		}

		// loops through "newWord" and the second word
		// starts at the next index in "newWord" after the last character assign by the previous loop 
		for (int j = this->getSize(); j < other.getSize() + this->getSize(); j++)
		{
			// creates a variable to be used as the index to interate through the second word
			int offset = j - this->getSize();

			// assigns the index of "newWord" to the value stored at the index of the second word
			newWord[j] = other.charArray[offset];
		}

		// assigns the last index "newWord" to the terminating character
		newWord[newSize] = '\0';

		// returns a new cString that is assigned the values store in "newWord" 
		return cString(newWord);
	}

	// creates a function that prepends the cString passed as a parameter to the cString the function was called from 
	cString prepend(cString other)
	{
		// creates a variable and assigns it the sum of both cStrings size
		int newSize = this->getSize() + other.getSize();

		// creates a pointer of type character and assigns it to a new character array of the size of "newSize"
		char * newWord = new char[newSize];

		// loops through "newWord" and the second word
		for (int i = 0; i < other.getSize(); i++)
		{
			// assigns the index of "newWord" to the value stored at the index of the second word
			newWord[i] = other.charArray[i];
		}

		// loops through "newWord" and the first word 
		// starts at the next index in "newWord" after the last character assign by the previous loop 
		for (int j = other.getSize(); j < this->getSize() + other.getSize(); j++)
		{
			// creates a variable to be used as the index to interate through the first word
			int offset = j - other.getSize();

			// assigns the index of "newWord" to the value stored at the index of the first word
			newWord[j] = this->charArray[offset];
		}

		// assigns the last index "newWord" to the terminating character
		newWord[newSize] = '\0';

		// returns a new cString that is assigned the values store in "newWord" 
		return cString(newWord);
	}

	// creates a function that returns a cString as constant character pointer
	const char* constantChar()
	{
		//creates a new variable to store size for the new array 
		int	newSize = this->getSize();

		// creates a constant character pointer and assigns it to a new character array and assigns its size "newSize"
		const char* newWord = new char[newSize];

		// returns "newWord" assigned to the the values of "charArray"
		return newWord = this->charArray;
	}

	// creates a function that turns all characters in a cString to lowercase
	cString lowerCase()
	{
		/*creates a pointer of type character and assigns it to a new character array
		of the same size as the cString it was called from*/
		char * newWord = new char[this->getSize()];

		// creates a variable to store the ascii value of a character
		int assKey = 0;

		// loops through the character array
		for (int i = 0; i < this->getSize(); i++)
		{
			// checks to see if the character is uppercase
			if (this->charArray[i] >= 65 && this->charArray[i] <= 90)
			{
				// assigns "assKey" to the value of an index of "chars" casted as an integer
				assKey = (int)charArray[i];

				// assigns the value of "assKey" to its value plus 32 which will give the ascii value of the uppercase version of the character
				assKey = assKey + 32;

				// assigns the index of "newWord" to the value of "assKey" casted as a character
				newWord[i] = (char)assKey;
			}

			// checks to see if the character is lowercase
			else if (this->charArray[i] >= 97 && this->charArray[i] <= 122)
			{
				//assigns index of "newWord" to the value of the index of "chars"
				newWord[i] = charArray[i];
			}

		}

		// assigns the last index "newWord" to the terminating character
		newWord[this->getSize()] = '\0';

		// returns a new cString that is assigned the values store in "newWord" 
		return cString(newWord);
	}

	// creates a function that turns all characters in a cString to uppercase
	cString upperCase()
	{
		/*creates a pointer of type character and assigns it to a new character array
		of the same size as the cString it was called from*/
		char * newWord = new char[this->getSize()];

		// creates a variable to store the ascii value of a character
		int assKey = 0;

		// loops through the character array
		for (int i = 0; i < this->getSize(); i++)
		{
			// checks to see if the character is lowercase
			if (this->charArray[i] >= 97 && this->charArray[i] <= 122)
			{
				// assigns "assKey" to the value of an index of "chars" casted as an integer
				assKey = (int)charArray[i];

				// assigns the value of "assKey" to its value minus 32 which will give the ascii value of the uppercase version of the character
				assKey = assKey - 32;

				// assigns the index of "newWord" to the value of "assKey" casted as a character
				newWord[i] = (char)assKey;
			}

			// checks to see if the character is uppercase
			else if (this->charArray[i] >= 65 && this->charArray[i] <= 90)
			{
				//assigns index of "newWord" to the value of the index of "chars"
				newWord[i] = charArray[i];
			}
		}

		// assigns the last index "newWord" to the terminating character
		newWord[this->getSize()] = '\0';

		// returns a new cString that is assigned the values store in "newWord" 
		return cString(newWord);
	}

	// creates a function that checks if a sub-string passed as a parameter exists in the cString
	bool subString(cString other)
	{
		// creates a boolean variable to store whether the sub-string was found
		bool subFound = false;

		// loops through the cString to find the sub-string 
		for (int i = 0; i < this->getSize(); i++)
		{
			// checks to see if "subFound" equal to true
			if (subFound == true)
			{
				// returns true 
				return true;
			}
		
			// checks to see if the current index of the cString is equal to the first index of the sub-string
			if (this->charArray[i] == other.charArray[0])
			{
				// start checking b/c we matched first letter
				for (int j = 0; j < other.getSize(); j++)
				{
					// the index we are at + the thing we want to iterate through
					if (this->charArray[i + j] == other.charArray[j])
					{
						// assigns "subFound" to true
						subFound = true;
						
						// assigns "theIndex" to 1
						theIndex = i;
					}

					// executes these lines of code if the conditional is not above is not met
					else
					{
						// assigns "subFound" to true;
						subFound = false;

						// assigns "theIndex" 1
						theIndex = 0;
					}
				}
			}
		}

		// returns "subFound"
		return subFound;
	}

	/*creates a function that checks if a sub-string passed as a parameter
	starting at the index passed as a parameter exists in the cString*/
	bool substringfromIndex(cString other, int n)
	{
		// creates a boolean variable to store whether the sub-string was found
		bool subFound = false;

		// loops through the cString starting at the index that was passed as a parameter
		for (int i = n; i < this->getSize(); i++)
		{
			/*checks to see if the value at the index of "chars" in the cString is the same
			as the value at the index of "chars" in the sub-string*/
			if (this->charArray[i] == other.charArray[0])
			{
				// loops through sub-string
				for (int j = 0; j < other.getSize(); j++, i++)
				{
					/*checks to see if the value at the index of "chars" in the cString is the same
					as the value at the index of "chars" in the sub - string*/
					if (this->charArray[i] == other.charArray[j])
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

	cString replaceSubstring(cString searchFor, cString replaceWith)
	{
		// creates a variable and assigns it to the return value of the "subString" fucntion 
		bool subFound = this->subString(searchFor);

		/*creates a new variable to be used for size and assigns it to the value of 
		the return value of */
		int newSize = this->getSize() - searchFor.getSize() + replaceWith.getSize();

		char * newWord = new char[newSize];
		
		//start at beginning
		for (int i = 0; i < theIndex; i++)
		{
			newWord[i] = this->charArray[i];
		}

		//start at what we put in
		

		for (int i = theIndex, j = 0; i < replaceWith.getSize() + theIndex; i++, j++)
		{
			newWord[i] = replaceWith.charArray[j];
		}

		//start at both things we put in
		int k = theIndex + searchFor.getSize();

		for (int i = (theIndex + replaceWith.getSize()); i < newSize; i++)
		{
			newWord[i] = this->charArray[k];
			k++;
		}

		newWord[newSize] = '\0';

		return cString(newWord);
	}
};