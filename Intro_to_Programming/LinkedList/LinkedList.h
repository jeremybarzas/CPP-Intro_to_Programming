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
class LinkedListIterator
{
private:

	Node<T> * current;

public:
	
	LinkedListIterator()
	{
		this->current = NULL;
	}

	LinkedListIterator(Node<T> * node)
	{
		this->current = node;
	}

	T operator*()
	{
		return current->info;
	}

	LinkedListIterator<T> operator++()
	{
		this->current = this->current->next;

		return *this;
	}

	bool operator==(LinkedListIterator<T>& iterator) const
	{
		if (this->current == iterator.current)
		{
			return true;
		}
		return false;
	}

	bool operator!=(LinkedListIterator<T>& iterator) const
	{
		if (this->current == iterator.current)
		{
			return false;
		}
		return true;
	}
};

template<typename T>
class LinkedList
{
protected:

	int m_count;
	Node<T> * first;
	Node<T> * last;

public:
	
	LinkedList() 
	{
		first = NULL;
		last = NULL;
		m_count = 0;
	}

	LinkedList(const LinkedList<T>& otherList)
	{
		*this = otherList;
	}

	~LinkedList() {}

	const LinkedList<T>& operator= (const LinkedList<T>& otherList)
	{
		this->copyList(otherList);

		return *this;
	}

	LinkedListIterator<T> begin()
	{
		return LinkedListIterator<T>(first);
	}

	LinkedListIterator<T> end()
	{
		return LinkedListIterator<T>(last);
	}

	void initializeList()
	{
		first = NULL;
		last = NULL;
		m_count = 0;
	}

	void deleteNode(const T& nodeInfo)
	{
		Node<T> * nodePtr = first;
		Node<T> * tmp = first;

		while (nodePtr != NULL)
		{
			//if the node you are checking is the last node
			if (nodePtr->next == NULL)
			{
				last = nodePtr;
				break;
			}
			// if the node you are checking is the one to be deleted
			if (nodePtr->info == nodeInfo)
			{
				tmp = nodePtr;
				nodePtr = nodePtr->next;
				delete tmp;
				m_count--;
				first = nodePtr;
			}
			// if the node next to the one you are checking is the one to be deleted
			if (nodePtr->next->info == nodeInfo)
			{
				tmp = nodePtr->next;
				nodePtr->next = nodePtr->next->next;
				delete tmp;
				m_count--;
			}
			// iterante the pointer to the next node to be checked.
			nodePtr = nodePtr->next;
		}
	}

	void destroyList()
	{
		Node<T> * ptr = first;

		while (ptr != NULL)
		{
			first = first->next;
			delete ptr;
			ptr = first;
			m_count--;
		}
		first = NULL;
		last = NULL;
	}

	T front() const
	{
		assert(first == NULL);

		return first->info;
	}

	T back() const
	{
		assert(last == NULL);

		return last->info;
	}

	bool isEmptyList() const
	{
		if (first == NULL)
		{
			return true;
		}
		return false;
	}

	int length() const
	{
		return m_count;
	}

	void insertLast(const T& node)
	{
		Node<T> * newNode = new Node<T>;

		newNode->info = node;
		newNode->next = NULL;

		if (first == NULL)
		{
			first = newNode;
			last = first;
			m_count++;
		}
		else
		{
			if (last == first)
			{
				first->next = newNode;
				last = newNode;
				m_count++;
			}
			else
			{
				last->next = newNode;
				last = newNode;
				m_count++;
			}
		}
	}

	void insertFirst(const T& nodeInfo)
	{
		Node<T> * newNode = new Node<T>;

		newNode->info = nodeInfo;
		newNode->next = NULL;

		if (first == NULL)
		{
			first = newNode;
			last = first;
			m_count++;
		}
		else
		{
			newNode->next = this->first;
			first = newNode;
			m_count++;
		}
	}

	bool search(const T& nodeInfo)
	{
		Node<T> * ptr = first;

		while (ptr != NULL)
		{
			if (ptr->info == nodeInfo)
			{
				return true;
			}
			ptr = ptr->next;
		}
		return false;
	}

	void print() const
	{
		Node<T> * ptr = first;

		while (ptr != NULL)
		{
			if (ptr == last)
			{
				cout << ptr->info;
				ptr = ptr->next;
			}
			else
			{
				cout << ptr->info << ", ";
				ptr = ptr->next;
			}
		}
	}

private:

	void copyList(const LinkedList<T>& otherList)
	{
		Node<T> * nodePtr = otherList.first;
		
		this->destroyList();

		int c = 0;

		while (nodePtr != NULL)
		{
			if (c == 0)
			{
				this->insertFirst(nodePtr->info);
				nodePtr = nodePtr->next;
				c++;
			}
			else
			{
				this->insertLast(nodePtr->info);
				nodePtr = nodePtr->next;
			}
		}
	}
};