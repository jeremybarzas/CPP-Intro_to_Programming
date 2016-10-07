#pragma once
#include<iostream>
using std::cout;

class Stack
{
public:
	Stack(int);
	
	void initializeStack();

	int m_size;
	int m_index;
	
	char * m_data;
	char * m_top;

	char* top();

	void pop();

	void push(const char&);

	bool isFullStack();

	bool isEmpty();
};

