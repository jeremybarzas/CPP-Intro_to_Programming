#pragma once
#include <iostream>

using std::cout;

class RPC
{
public:
	RPC();
	
	int m_size;
	int m_index;

	int m_outcome;

	int * m_IntArray;

	void AddToStack(int);
	void AddToStack(char);

	int Resolve(char);

	void input();

};