#include "ReversePolishCalculator.h"

RPC::RPC()
{
	m_size = 2;
	m_index = 0;

	m_outcome = 0;

	m_IntArray = new int[m_size];
}

void RPC::AddToStack(int a)
{
	if (m_index >= m_size)
	{
		int * sBuffer = new int[m_size *= 2];

		for (int i = 0; i < m_size; i++)
		{
			sBuffer[i] = m_IntArray[i];
		}

		delete[] m_IntArray;

		m_size *= 2;
		m_IntArray = sBuffer;


		m_IntArray[m_index] = a;
		printf("Added to stack.\n\n");

		m_index++;
	}
}

void RPC::AddToStack(char a)
{
	if (a != '+' || a != '-' || a != '*' || a != '/' || a != '%')
	{
		if (m_index >= m_size)
		{
			int * sBuffer = new int[m_size * 2];

			for (int i = 0; i < m_size; i++)
			{
				sBuffer[i] = m_IntArray[i];
			}

			delete[] m_IntArray;

			m_size += 2;
			m_IntArray = sBuffer;
		}

		m_IntArray[m_index] = (int)a;
		printf("Added to stack.\n\n");

		m_index++;
	}

	else
	{
		Resolve(a);
	}
}

int RPC::Resolve(char o)
{
	// + = 43
	// - = 45
	// * = 42
	// / = 47
	// % = 37

	m_outcome = m_IntArray[0];
	
	for (int i = 1; i < m_index; i++)
	{
		if (o == '+')
		{
			m_outcome += m_IntArray[i];
		}
		else if (o == '-')
		{
			m_outcome -= m_IntArray[i];
		}
		else if (o == '*')
		{
			m_outcome *= m_IntArray[i];
		}
		else if (o == '/')
		{
			m_outcome /= m_IntArray[i];
		}
		else if (o == '%')
		{
			m_outcome %= m_IntArray[i];
		}
	}

	return m_outcome;
}

void input()
{
	// funtion to take in user input to add to stack would work with integers and characters.
}