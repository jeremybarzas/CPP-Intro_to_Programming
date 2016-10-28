#pragma once
#include <iostream>

using std::cout;

template<typename T>
struct Node
{
	T info;
	Node * next;
};

template<typename T>
class LinkedList
{
protected:
	int m_count = 0;
	Node<T> * first;
	Node<T> * last;

public:
	LinkedList() {};

	~LinkedList() {};

	bool Add(const T& node)
	{
		if (first == NULL)
		{
			first = node;
			last = first;
			m_count++;
			return true;
		}
		else
		{
			if (last == first)
			{
				first->next = node;
				last = node;
				m_count++;
				return true;
			}
			else
			{
				last->next = node;
				last = node;
				m_count++;
				return true;
			}
		}

		return false;
	}

	T front() const
	{
		return last;
	}

	int length() const
	{
		return m_count;
	}

	void print()
	{
		
	}
};