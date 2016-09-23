#include "CustomStringClass.h"

cString::cString()
{
	m_size = 0;
	charArray = nullptr;
	theIndex = -1;
};

cString::cString(char c[])
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

void cString::printWord()
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

int cString::getSize()
{
	// returns the size of the cString
	return m_size;
}

char cString::atIndex(int i)
{
	// creates a variable of type character and assigns it the value store at the specific index 
	char temp = charArray[i];

	// returns the "temp" char variable
	return temp;
}

int cString::compare(cString c)
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

cString cString::append(char * otherc)
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

cString cString::append(cString other)
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

cString cString::prepend(cString other)
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

const char* cString::constantChar()
{
	//creates a new variable to store size for the new array 
	int	newSize = this->getSize();

	// creates a constant character pointer and assigns it to a new character array and assigns its size "newSize"
	const char* newWord = new char[newSize];

	// returns "newWord" assigned to the the values of "charArray"
	return newWord = this->charArray;
}

cString cString::lowerCase()
{
	/*creates a pointer of type character and assigns it to a new character array
	of the same size as the cString it was called from*/
	char * newWord = new char[this->getSize()];

	// creates a variable to store the ascii value of a character
	int Ascii = 0;

	// loops through the character array
	for (int i = 0; i < this->getSize(); i++)
	{
		// checks to see if the character is uppercase
		if (this->charArray[i] >= 65 && this->charArray[i] <= 90)
		{
			// assigns "assKey" to the value of an index of "chars" casted as an integer
			Ascii = (int)charArray[i];

			// assigns the value of "assKey" to its value plus 32 which will give the ascii value of the uppercase version of the character
			Ascii = Ascii + 32;

			// assigns the index of "newWord" to the value of "assKey" casted as a character
			newWord[i] = (char)Ascii;
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

cString cString::upperCase()
{
	/*creates a pointer of type character and assigns it to a new character array
	of the same size as the cString it was called from*/
	char * newWord = new char[this->getSize()];

	// creates a variable to store the ascii value of a character
	int Ascii = 0;

	// loops through the character array
	for (int i = 0; i < this->getSize(); i++)
	{
		// checks to see if the character is lowercase
		if (this->charArray[i] >= 97 && this->charArray[i] <= 122)
		{
			// assigns "assKey" to the value of an index of "chars" casted as an integer
			Ascii = (int)charArray[i];

			// assigns the value of "assKey" to its value minus 32 which will give the ascii value of the uppercase version of the character
			Ascii = Ascii - 32;

			// assigns the index of "newWord" to the value of "assKey" casted as a character
			newWord[i] = (char)Ascii;
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

bool cString::subString(cString other)
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

bool cString::substringfromIndex(cString other, int n)
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

cString cString::replaceSubstring(cString searchFor, cString replaceWith)
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
	for (int i = theIndex, j = 0; i < replaceWith.getSize() + this->theIndex; i++, j++)
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

void test1()
{
	cString testWord1 = cString("things");
	cString testWord2 = cString("stuff");
	cString testWord3 = cString("stuff");

	printf("\n========== Get the length of a cString ==========\n\n\n");

	printf("String to get size of: "); testWord1.printWord();
	cout << "Size of is: " << testWord1.getSize() << "\n\n";

	printf("String to get size of: "); testWord2.printWord();
	cout << "Size of is: " << testWord2.getSize() << "\n\n";

	printf("\n========== Accessing a character at a certain index ==========\n\n\n");

	printf("String to get index of: "); testWord1.printWord();
	cout << "Character at index 4 is: " << testWord1.atIndex(4) << "\n\n";

	printf("String to get index of: "); testWord2.printWord();
	cout << "Character at index 2 is: " << testWord2.atIndex(2) << "\n\n";

	printf("\n========== Comparing on cString to another cString ==========\n\n\n");

	// -1 if before, 0 if same, 1 if after
	int same = testWord2.compare(testWord3); // "stuff".compare("stuff") should be 0

	printf("Word 1: "); testWord2.printWord();
	printf("Word 2: "); testWord3.printWord();
	printf("Compare function output: %i \n\n", same);

	int lexAfter = testWord2.compare(testWord1); // "stuff" .compare("things") should be -1

	printf("Word 1: "); testWord2.printWord();
	printf("Word 2: "); testWord1.printWord();
	printf("Compare function output: %i \n\n", lexAfter);

	int lexBefore = testWord1.compare(testWord2); // "things".compare("stuff") should be 1

	printf("Word 1: "); testWord1.printWord();
	printf("Word 2: "); testWord2.printWord();
	printf("Compare function outcome: %i \n\n", lexBefore);

	printf("\n========== Appending a cString to another cString ==========\n\n\n");

	cString testWord4 = testWord1.append(testWord2);

	printf("Word 1: "); testWord1.printWord();
	printf("Word 2: "); testWord2.printWord();
	printf("Append function outcome: ");
	testWord4.printWord();

	printf("\n========== Prepending a cString to another cString ==========\n\n\n");

	cString testWord5 = testWord1.prepend(testWord2);

	printf("Word 1: "); testWord1.printWord();
	printf("Word 2: "); testWord2.printWord();
	printf("Prepend function outcome: ");
	testWord5.printWord();

	printf("\n========== Return a cString as a constant C-style string ==========\n\n\n");

	const char* testString = testWord1.constantChar();

	printf("Word to be changed into a constant C-style string: "); testWord1.printWord();
	cout << testString << "\n\n";

	printf("\n========== Convert all characters in cString to lowercase ==========\n\n\n");

	cString testWord6 = ("ThInGs");
	cString testWord7 = testWord6.lowerCase();

	printf("Word before modification is: "); testWord6.printWord();

	printf("Word after modification is: "); testWord7.printWord();

	printf("\n========== Convert all characters in cString to uppercase ==========\n\n\n");

	cString testWord8 = testWord6.upperCase();

	printf("Word before modification is: "); testWord6.printWord();

	printf("Word after modification is: "); testWord8.printWord();

	printf("\n========== Find a sub-string within a cString ==========\n\n\n");

	cString subString1 = cString("hing");
	bool found1 = testWord1.subString(subString1);

	printf("Sub-string to search for: "); subString1.printWord();
	printf("Searching for sub-string within: "); testWord1.printWord();

	(found1 == true) ? printf("Found sub-string\n\n") : printf("Did not find sub-string\n\n");

	cString subString2 = cString("stf");
	bool found2 = testWord2.subString(subString2);

	printf("Sub-string to search for: "); subString2.printWord();
	printf("Searching for sub-string within: "); testWord2.printWord();

	(found2 == true) ? printf("Found sub-string\n\n") : printf("Did not find sub-string\n\n");

	printf("\n========== Find a sub-string within a cString starting at an index ==========\n\n\n");

	cString subString3 = cString("ings");
	bool found3 = testWord1.substringfromIndex(subString3, 2);

	printf("Sub-string to search for: "); subString3.printWord();
	printf("Searching for sub-string within: "); testWord1.printWord();
	printf("Starting at index: 2\n\n");

	(found3 == true) ? printf("Found sub-string\n\n") : printf("Did not find sub-string\n\n");

	cString subString4 = cString("stu");
	bool found4 = testWord2.substringfromIndex(subString4, 3);

	printf("Sub-string to search for: "); subString4.printWord();
	printf("Searching for sub-string within: "); testWord2.printWord();
	printf("Starting at index: 3\n\n");

	(found4 == true) ? printf("Found sub-string\n\n") : printf("Did not find sub-string\n\n");

	printf("\n========== Replacing a found sub-string with another sub-string ==========\n\n\n");

	cString testWord9 = cString("thethings");
	cString subString5 = cString("thi");
	cString subString6 = cString("facehead");

	printf("cString to search/replace within: "); testWord9.printWord();
	printf("Sub-string to search for: "); subString5.printWord();
	printf("Sub-string to replace with: "); subString6.printWord();

	cString testWord10 = testWord9.replaceSubstring(subString5, subString6);

	testWord10.printWord();

	printf("\n========== Set a cString to a user's input ==========\n\n\n");

	char input[255];

	char *inputPtr = input;

	printf("Enter a string: ");
	cin >> inputPtr;

	cString testWord11 = cString(inputPtr);

	printf("\nThe new instance of the cString class is: "); testWord11.printWord();

	return;
}