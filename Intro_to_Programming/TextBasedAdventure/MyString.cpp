#include "MyString.h"



MyString::MyString()
{
	data = ""; // Default behavior will be to set it to empty
}

MyString::MyString(char *newString) : MyString()
{
	// If the passed parameter was an empty string, stop this function
	if (newString == "")
		return;

	// Calculate the length of the passed parameter and store it in 'stringLength'
	int stringLength = 0;
	for (int i = 0; newString[i] != '\0'; ++i)
		stringLength = i;

	stringLength++;

	// Set the size of the array to the length of the passed in string + 1 to account for adding a '\0'
	data = new char[stringLength + 1]; // This will cause a memory leak without a destructor

	// For every value in the passed parameter, store each value into 'data' at the corresponding index
	int i;
	for (i = 0; i < stringLength; ++i)
		data[i] = newString[i];
	// Add an escape sequence of '\0' to indicate an end to the character array
	data[stringLength] = '\0';
}

int MyString::Length()
{
	// If the string is empty, return 0
	if (data == "" || data[0] == '\0')
		return 0;

	// Calculate the length of this string and store it in 'stringLength'
	int stringLength = 0;
	for (int i = 0; data[i] != '\0'; ++i)
		stringLength = i;
	stringLength++;

	return stringLength;
}

char MyString::GetCharacter(int index)
{
	// Return the character at the requested index
	return data[index];
}

bool MyString::Compare(MyString otherString)
{
	// If both strings are empty, then they are the same
	if (data == "" && otherString.data == "" ||
		data[0] == '\0' && data[0] == '\0')
		return true;

	// Since both strings were not empty, if one of the strings is empty then they are not the same
	if (data == "" || otherString.data == "" ||
		data[0] == '\0' || data[0] == '\0')
		return false;

	// If the strings do not have the same length then they cannot be the same
	if (Length() != otherString.Length())
		return false;

	// Loop until the end of this string
	for (int i = 0; data[i] != '\0'; ++i)
		// If a character doesn't match, the strings are not the same
		if (data[i] != otherString.data[i])
			return false;

	// If against all odds the code gets here, then both strings are the same since nothing found otherwise
	return true;
}

void MyString::Append(MyString otherString)
{
	// Store a pointer to the old string data
	char *oldData = data;
	// Store the old length of the string
	int oldLength = Length();

	// Allocate a new block of memory large enough to hold both strings plus a '\0'
	int newLength = Length() + otherString.Length();
	data = new char[newLength + 1];

	// Put the old block of memory back into the new block of memory
	int i;
	for (i = 0; i < oldLength; ++i)
		data[i] = oldData[i];
	// Put the passed parameter's data at the end of the new block of memory
	for (i = oldLength; i - oldLength < otherString.Length(); ++i)
		data[i] = otherString.data[i - oldLength];
	// Add an escape sequence of '\0' to indicate an end to the character array
	data[i] = '\0';

	// Get rid of the old data
	delete[] oldData;
}

void MyString::Prepend(MyString otherString)
{
	// We already have an append function, so let's use it to put this string ahead of the passed parameter
	otherString.Append(data);
	// Since 'otherString' now contains the value we want, grab it
	data = otherString.data;
}

const char * MyString::CStyle()
{
	return data;
}

MyString MyString::ToLower()
{
	// Make a copy of this string
	MyString toLower = MyString(data);	// This will cause a memory leak without a destructor

	// Lowercase the copy
	for (int i = 0; i < Length(); ++i)
	{
		// If the letter at 'i' index is capital, make it a lowercase letter
		if (toLower.data[i] >= 'A' && toLower.data[i] <= 'Z')
			toLower.data[i] += 32;
	}
	// Return the copy
	return toLower;
}

MyString MyString::ToUpper()
{
	// Make a copy of this string
	MyString toUpper = MyString(data);	// This will cause a memory leak without a destructor

	// Uppercase the copy
	for (int i = 0; i < Length(); ++i)
	{
		// If the letter at 'i' index is lowercase, make it an uppercase letter
		if (toUpper.data[i] >= 'a' && toUpper.data[i] <= 'z')
			toUpper.data[i] -= 32;
	}
	return toUpper;
}

// TODO: @dylan @matthew
// Both versions of the 'FindSubString' function should be called 'Contains' instead since
// That is the actual functionality of this...well...function
// The class lacks an actual subString function
bool MyString::FindSubString(MyString findString)
{
	// Use the overloaded function and tell it to start at the 0th index of this string
	return FindSubString(findString, 0);
}
// See Above
bool MyString::FindSubString(MyString findString, int begin)
{
	// If this string is empty and the string to find is empty, return true
	if (data == "" && findString.data == "")
		return true;

	// Since both strings were not empty, if one of the strings is empty then return false
	if (data == "" || findString.data == "")
		return false;

	// If we were told to start looking beyond the length of this string then return false
	if (begin > Length())
		return false;

	// Loop through each index of this string and see which characters match
	int matchLength = 0;	// How many letters have matched so far in the loop
	for (int i = begin; i < Length(); ++i)
	{
		// If the index 'i' of this string is the same as the index of 'findString' that
		// We're currently looking at, move on to the next index
		if (data[i] == findString.data[matchLength])
			matchLength++;
		// Otherwise, start over
		else
			matchLength = 0;

		// If we've matched up with the same number of characters as are in the 'findString'
		// Then the loop is done and we found the sub string
		if (matchLength == findString.Length())
			break;
	}

	// Return the evaluated expression of whether or not we matched up with the same
	// Amount of characters as are in the passed parameter
	return matchLength == findString.Length();
}

// Since was not allowed to modify the header and could therefore not create a
// Proper substring class, this function is longer than is needed
void MyString::ReplaceSubString(MyString replaceString, MyString withString)
{
	// If either this string or the string to replace are empty, return
	if (data == "" || replaceString.data == "")
		return;

	// Keep trying to replace so long as the 'replaceString' exists in this string
	while (FindSubString(replaceString))
	{
		int matchLength = 0;	// How many matching characters we've found so far
		int matchStart = 0;		// The start of a matching string
		int matchEnd = 0;		// The end of a matching string
		for (int i = 0; i < Length(); ++i)
		{
			// If the index 'i' of this string is the same as the index of 'replaceString' that
			// We're currently looking at...
			if (data[i] == replaceString.data[matchLength])
			{
				// If this is the first match
				if (matchLength == 0)
					matchStart = i;
				// Otherwise
				else
					matchEnd = i;

				matchLength++;	// Move on to the next index
			}
			// Otherwise start over
			else
				matchLength = 0;

			// If we've matched up with the same number of characters as are in the 'findString'
			// Then the loop is done and we found the string to replace
			if (matchLength == replaceString.Length())
				break;
		}
		// If we found the string to replace in this string
		if (matchLength == replaceString.Length())
		{
			int i; // Will store the index at the end of the new string

			// Create a new block in memory to hold everything before where we
			// Found the string to be replaced
			char *prepend = new char[matchStart + 1];
			// Store all the values before the string to be replaced
			for (i = 0; i < matchStart; ++i)
				prepend[i] = data[i];
			// Add an escape sequence of '\0' to indicate an end to the character array
			prepend[i] = '\0';

			// Create a new block in memory to hold everything after where we
			// Found the string to be replaced
			char *append = new char[Length() - matchEnd + 1];
			// Store all the values after the string to be replaced
			for (i = matchEnd + 1; i < Length(); ++i)
				append[i - matchEnd - 1] = data[i];
			// Add an escape sequence of '\0' to indicate an end to the character array
			append[i - matchEnd - 1] = '\0';

			// Store a pointer to the old data so it can be deleted later
			char *oldData = data;

			// Create a new block of memory which is the size of the old string plus the difference
			// Between the string to replace with and the string we are replacing
			data = new char[Length() + (withString.Length() - replaceString.Length())];
			// Make sure this is an empty string to start
			data[0] = '\0';

			// So long as prepend wasn't empty
			if (prepend[0] != '\0')
				Prepend(prepend);
			Append(withString);
			// Even if append is empty, we still add it since it will contain
			// An escape sequence of '\0'
			Append(append);

			delete[] prepend;	// Get rid of prepend's memory
			delete[] append;	// Get rid of append's memory

			delete[] oldData;	// Delete the old data
		}
	}
}

void test1()
{
	MyString string = "Default String";
	cout << "Constructor:" << endl;
	cout << string.CStyle() << endl;
	cin.get();

	int length = string.Length();
	cout << "Length():" << endl;
	cout << length << endl;
	cin.get();

	bool equal = string.Compare("Default String");
	cout << "Compare(\"Default String\")" << endl;
	cout << equal << endl;
	cin.get();

	string.Append(" Append");
	cout << "Append(\" Append\"):" << endl;
	cout << string.CStyle() << endl;
	cin.get();

	string.Prepend("Prepend ");
	cout << "Prepend(\"Prepend \"):" << endl;
	cout << string.CStyle() << endl;
	cin.get();

	string = string.ToLower();
	cout << "string = string.ToLower():" << endl;
	cout << string.CStyle() << endl;
	cin.get();

	string = string.ToUpper();
	cout << "string = string.ToUpper():" << endl;
	cout << string.CStyle() << endl;
	cin.get();

	bool foundSubString = string.FindSubString("DEFAULT");
	cout << "FindSubString(\"DEFAULT\"):" << endl;
	cout << foundSubString << endl;
	cin.get();

	foundSubString = string.FindSubString("DEFAULT", 15);
	cout << "FindSubString(\"DEFAULT\", 15):" << endl;
	cout << foundSubString << endl;
	cin.get();

	string.ReplaceSubString("PREPEND", "Gone");
	cout << "ReplaceSubString(\"APPEND\", \"Gone\"):" << endl;
	cout << string.CStyle() << endl;
	cin.get();

	string.ReplaceSubString("APPEND", "That's gone now too");
	cout << "ReplaceSubString(\"APPEND\", \"That's gone now too\"):" << endl;
	cout << string.CStyle() << endl;
	cin.get();

	cout << endl << "End of Program" << endl;
}