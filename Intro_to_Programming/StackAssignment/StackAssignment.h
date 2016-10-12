#pragma once
#include<iostream>
using std::cout;

class Stack
{
public:
	Stack(int);

	void initializeStack();

	int m_Size;
	int m_Index;

	char * m_Data;
	char * m_Top;

	char* Top();

	void Pop();

	void Push(const char&);

	bool isFullStack();

	bool isEmpty();

	int m_intArray[3];
};

int Conversion2int(char[], int);

char Conversion2char(int);