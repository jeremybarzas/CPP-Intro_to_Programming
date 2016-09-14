#pragma once

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>

using std::string;
using std::cout;
using std::cin;

class cString
{
private:
	int m_size;
	char *chars;

public:

	cString::cString() {};

	cString::cString(char c[])
	{	
		for (m_size = 0; c[m_size] != 0;)
		{
			m_size++;
		}
		
		chars = new char[m_size];
		
		chars = c;
	}

	void printWord()
	{
		for (int i = 0; i < m_size; i++)
		{
			printf("%c", chars[i]);
		}
		printf("\n\n");
	}

	int cString::sizeOf()
	{
		return m_size;
	}

	char cString::atIndex(int i)
	{
		char temp = chars[i];
		
		return temp;
	}

	int cString::compare(cString c)
	{
		int i = 0;
		int result = 0;

		while (true)
		{
			if (chars[i] == c.chars[i])
			{
				result = 0;
				break;
			}
			
			else if (chars[i] > c.chars[i])
			{
				result = 1;
				break;
			}

			else if (chars[i] < c.chars[i])
			{
				result = -1;
				break;
			}

			else
			{
				i++;
			}
		}

		return result;
	}

	cString cString::append(cString other)
	{		
		int newSize = this->sizeOf() + other.sizeOf();

		char * newWord = new char[newSize];

		for (int i = 0; i < this->sizeOf(); i++)
		{
			newWord[i] = this->chars[i];
		}
		
		for (int j = this->sizeOf(); j < other.sizeOf() + this->sizeOf(); j++)
		{
			int offset = j - this->sizeOf();
			newWord[j] = other.chars[offset];
			
		}
		newWord[newSize] = '\0';
		
		return cString(newWord);
	}

	cString cString::prepend(cString other)
	{
		int newSize = this->sizeOf() + other.sizeOf();

		char * newWord = new char[newSize];

		for (int i = 0; i < other.sizeOf(); i++)
		{
			newWord[i] = other.chars[i];
		}

		for (int j = other.sizeOf(); j < this->sizeOf() + other.sizeOf(); j++)
		{
			int offset = j - other.sizeOf();
			newWord[j] = this->chars[offset];
		}

		newWord[newSize] = '\0';

		return cString(newWord);
	}

	cString cString::lowerCase()
	{
		char * newWord = new char[this->sizeOf()];

		int assKey = 0;

		for (int i = 0; i < this->sizeOf(); i++)
		{
			if (this->chars[i] >= 65 && this->chars[i] <= 90)
			{
				assKey = (int)chars[i];
				assKey = assKey + 32;
				newWord[i] = (char)assKey;
			}
			else if (this->chars[i] >= 97 && this->chars[i] <= 122)
			{
				newWord[i] = chars[i];
			}

		}

		newWord[this->sizeOf()] = '\0';

		return cString(newWord);
	}

	cString cString::upperCase()
	{
		char * newWord = new char[this->sizeOf()];

		int assKey = 0;

		for (int i = 0; i < this->sizeOf(); i++)
		{
			if (this->chars[i] >= 97 && this->chars[i] <= 122)
			{
				assKey = (int)chars[i];
				assKey = assKey - 32;
				newWord[i] = (char)assKey;
			}
			else if (this->chars[i] >= 65 && this->chars[i] <= 90)
			{
				newWord[i] = chars[i];
			}
		}

		newWord[this->sizeOf()] = '\0';

		return cString(newWord);
	}

	bool cString::subString(cString other)
	{
		bool subFound = false;
		int i = 0;
		int j = 0;

		for (int i = 0; i < this->sizeOf(); i++)
		{
			if (this->chars[i] == other.chars[0])
			{
				subFound = true;

				for (int j = 0; j < other.sizeOf(); i++, j++)
				{
					if (this->chars[i] == other.chars[j])
					{
						subFound = true;
					}

					else
					{
						subFound = false;
					}
				}
			}
		}

		return subFound;

		/*while (true)
		{
			if (this->chars[i] == other.chars[j])
			{
				i++;
				j++;

				if (this->chars[i] == other.chars[j])
				{
					subFound = true;
				}
				else if (this->chars[i] != other.chars[j])
				{
					subFound = false;
				}
			}
		}*/

	}
};