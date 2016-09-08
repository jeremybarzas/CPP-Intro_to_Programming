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
		//need a new character array that is the size of both... + 1 if we want a null terminating character
		char * newWord = new char[newSize];
		//populate the newWord with the first part that is this
		for (int i = 0; i < this->m_size; i++)
		{
			newWord[i] = this->chars[i];
		}
		//populate 
		
		for (int j = sizeOf(); j < other.sizeOf() + this->sizeOf(); j++)
		{
			int offset = j - this->sizeOf();
			newWord[j] = other.chars[offset];
			
		}
		newWord[newSize] = '\0';
		
		return cString(newWord);
	
	}
	void printWord()
	{
		printf("PRINTING THE WORD!!!!!!");
		for (int i = 0; i < m_size; i++)
		{
			printf("%c", chars[i]);
		}
		printf("\n");
		
	}

};

class Item
{
	Item() {}
	
};
class Student
{
public:

	string name;
	int ID;
	int age;
	int weight;
	bool alive;
	Item * inventory;

	Student::Student() {};

	Student::Student(string n, int i, int a, int w, bool d)
	{
		name = n;
		ID = i;
		age = a;
		weight = w;
		alive = d;
	}

};

void studentSwap(Student &);

void studentSwap(Student &a, Student &b)
{
	Student temp;
	temp = a;
	a = b;
	b = temp;

	return;
}