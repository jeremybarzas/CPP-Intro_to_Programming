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

	bool Add(const T& n)
	{
		Node<T> * newNode = new Node<T>;

		newNode->info = n;
		newNode->next = NULL;

		if (first == NULL)
		{
			first = newNode;
			last = first;
			m_count++;
			return true;
		}
		else
		{
			if (last == first)
			{
				first->next = newNode;
				last = newNode;
				m_count++;
				return true;
			}
			else
			{
				last->next = newNode;
				last = newNode;
				m_count++;
				return true;
			}
		}

		return false;
	}

	T front() const
	{
		return last->info;
	}

	int length() const
	{
		return m_count;
	}

	void print()
	{
		
	}
};