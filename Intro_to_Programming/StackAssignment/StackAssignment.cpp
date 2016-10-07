#include "StackAssignment.h"

Stack::Stack(int size)
{
	m_size = size;
	m_index = -1;
}

void Stack::initializeStack()
{
	m_data = new char[m_size];

	m_top = &m_data[m_index];
}

void Stack::push(const char &a)
{
	m_index++;

	m_data[m_index] = a;

	top();

	cout << a << " was ";
	printf("push on the stack.\n\n");

	/*if (isFullStack())
	{
		pop();

		cout << a << " was ";
		printf("popped\n\n");

		cout << "the top is: " << m_top << "\n\n";
	}

	else if (!isFullStack())
	{
		if (isEmpty())
		{
			m_index++;
			
			m_data[m_index] = a;

			top();

			cout << a << " was ";
			printf("push on the stack.\n\n");

			cout << "the top is: " << m_top << "\n\n";
		}

		else if (isEmpty() == false)
		{
			m_index++;

			char * pushBuffer = new char[m_size + 1];

			for (int i = 0; i < m_size; i++)
			{
				pushBuffer[i] = m_data[i];
			}

			delete[] m_data;

			m_size += 1;
			m_data = pushBuffer;

			m_data[m_index] = a;

			top();

			cout << a << " was ";
			printf("pushed on the stack.\n\n");

			cout << "the top is: " << m_top << "\n\n";
		}
	}*/
}

char* Stack::top()
{
	m_top = &m_data[m_index];

	return m_top;
}

void Stack::pop()
{ 
	m_index --;
}

bool Stack::isFullStack()
{
	if (m_index >= m_size)
	{
		return true;
	}
	
	return false;
}

bool Stack::isEmpty()
{
	if (m_index < -1)
	{
		return false;
	}

	if (m_index >= -1)
	{
		return true;
	}
}
