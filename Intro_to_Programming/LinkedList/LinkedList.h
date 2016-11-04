#pragma once
#include <iostream>
#include <cassert>

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
		printf("\n\n");
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


//template<typename Type>
//struct nodeType
//{
//	Type info;
//	nodeType<Type> *link;
//};
//
//template<typename Type>
//class linkedListIterator
//{
//private:
//	nodeType<Type> * current; //pointer to point to the current node in the linked list
//
//public:
//	//Default constructor
//	//Postcondition: current = NULL
//	linkedListIterator() {}
//
//	//Constructor with parameter
//	//Postcondition: current = node
//	linkedListIterator(nodeType<Type> *node);
//
//	//Function to overlaod the dereferencing operator *
//	//Postcondition:Returns the info contained in the node
//	Type operator*();
//
//	//Overload the pre-increment operator
//	//Postcondition: The iterator is advanced to the next node
//	linkedListIterator<Type> operator++();
//
//	//Overlaod the equality operator
//	//Postcondition: Returns true if this iterator is equal to the 
//	//iterator specified by right otherwise returns false
//	bool operator==(linkedListIterator<Type>& list) const;
//
//	//Overlaod the not equal operator
//	//Postcondition: Returns true if this iterator is not equal to the 
//	//iterator specified by right otherwise returns false
//	bool operator!=(linkedListIterator<Type>& list) const;
//};

//template<typename Type>
//class linkedListType
//{
//protected:
//	int count; //variable to store the number of elements in the list
//	nodeType<Type> *first; //pointer to the first node of the list
//	nodeType<Type> *last; //pointer to the last node of the list
//
//public:
//	//Overload the assignment operator
//	const linkedListType<Type>& operator= (const linkedListType<Type>& otherList);
//
//	//Initialize the list to an empty state
//	//Postcondition: first = NULL, last = NULL, count = 0;
//	void initializeList();
//
//	//Function to determine whether the list is empty
//	//Postcondition: Returns true if the list is empty otherwise it returns false
//	bool isEmptyList() const;
//
//	//Function to output the data contained in each node
//	//Postcondition: Node
//	void print() const;
//
//	//Function to return the number of nodes in the list
//	//Postcondition: The value of count is returned
//	int length() const;
//
//	//Function to delete all the nodes from the list
//	//Postcondition: first = NULL, last = NULL, count = 0;
//	void destroyList();
//
//	//Function to return the first element in the list
//	//Precondition: The list must exist and must not be empty
//	//Postcondition: If the list is empty, the program terminates; otherwise,
//	//the first element of the list is returned
//	Type front() const;
//
//	//Function to return the last element in the list
//	//Precondition: The list must exist and must not be empty
//	//Postcondition: If the list is empty, the program terminates; otherwise,
//	//the last element of the list is returned
//	Type back() const;
//
//	//Function to determine whether node is in the list
//	//Postcondition: Returns true if node is in the list
//	//otherwise teh value false is returned
//	bool search(const Type& nodeInfo);
//
//	//Function to insert node at the begining of the list
//	//Postcondition: first points to the new list, node is inserted 
//	//at the beginning of the list, last points to the last node in
//	//the list, and count is incremented by 1;
//	void insertFirst(const Type& nodeInfo);
//
//	//Function to insert node at the end of the list
//	//Postcondition: first points to the new list, node is inserted 
//	//at the beginning of the list, last points to the last node in
//	//the list, and count is incremented by 1;
//	void insertLast(const Type& nodeInfo);
//
//	//Function to delete node from the list
//	//Postcondition: If found, the node containing the node is deleted from the list. first points to
//	//the first node, last points to the last node of the update list, and count is decremented by 1
//	void deleteNode(const Type& nodeInfo);
//
//	//Function to return an iterator at the begining of the linked list
//	//Postcondition: Returns an iteratir such that the current is set to first
//	linkedListIterator<Type> begin();
//
//	//Funcion to rturn an iterator at the end of the linked list
//	//Postcondition: Returns an iterator such that current is set to NULL
//	linkedListIterator<Type> end();
//
//	//Default constructor
//	//Initializes the list to an empty state
//	//Postcondition: first = NULL, last = NULL, count = 0;
//	linkedListType();
//
//	//copy constructor
//	linkedListType(const linkedListType<Type> otherList);
//
//	//deconstructor
//	//Deletes all the nodes from the list
//	//Postcondition: The list object is destroyed
//	~linkedListType<Type>() {}
//
//
//};