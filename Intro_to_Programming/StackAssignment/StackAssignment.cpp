#include "StackAssignment.h"

Stack::Stack(int size)
{
	m_Size = size;
	m_Index = -1;
}

void Stack::initializeStack()
{
	m_Data = new char[m_Size];

	m_Top = &m_Data[m_Index];
}

void Stack::Push(const char &a)
{
	m_Index++;

	m_Data[m_Index] = a;

	Top();

	cout << a << " was ";
	printf("push on the stack.\n\n");
}

char* Stack::Top()
{
	m_Top = &m_Data[m_Index];

	return m_Top;
}

void Stack::Pop()
{ 
	m_Index --;
}

bool Stack::isFullStack()
{
	if (m_Index >= m_Size)
	{
		return true;
	}
	
	return false;
}

bool Stack::isEmpty()
{
	if (m_Index > -1)
	{
		return false;
	}
	if (m_Index <= -1)
	{
		return true;
	}
}

int Conversion2int(char PFE[], int index)
{
	if (PFE[index] == '0')
	{
		return 0;
	}
	else if (PFE[index] == '1')
	{
		return 1;
	}
	else if (PFE[index] == '2')
	{
		return 2;
	}
	else if (PFE[index] == '3')
	{
		return 3;
	}
	else if (PFE[index] == '4')
	{
		return 4;
	}
	else if (PFE[index] == '5')
	{
		return 5;
	}
	else if (PFE[index] == '6')
	{
		return 6;
	}
	else if (PFE[index] == '7')
	{
		return 7;
	}
	else if (PFE[index] == '8')
	{
		return 8;
	}
	else if (PFE[index] == '9')
	{
		return 9;
	}
}

char Conversion2char(int number)
{
	if (number == 0)
	{
		return '0';
	}
	else if (number == 1)
	{
		return '1';
	}
	else if (number == 2)
	{
		return '2';
	}
	else if (number == 3)
	{
		return '3';
	}
	else if (number == 4)
	{
		return '4';
	}
	else if (number == 5)
	{
		return '5';
	}
	else if (number == 6)
	{
		return '6';
	}
	else if (number == 7)
	{
		return '7';
	}
	else if (number == 8)
	{
		return '8';
	}
	else if (number == 9)
	{
		return '9';
	}
}