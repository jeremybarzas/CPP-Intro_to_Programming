#include "LinkedList.h"

int main()
{
	// linked list of nodes that are templated to integers.
	LinkedList<int> list = LinkedList<int>();
	LinkedList<int> list2 = LinkedList<int>();
	
	list.initializeList();
	list2.initializeList();
	
	list.insertLast(1);
	list.insertLast(2);
	list.insertLast(3);
	list.insertLast(4);
	list.insertFirst(5);
	list.insertFirst(6);
	list.insertFirst(7);
	list.insertFirst(8);
	
	list.print();

	int count = list.length();
	bool found = list.search(10);

	list.deleteNode(8);
	list.print();

	count = list.length();
	
	LinkedListIterator<int> iterator = list.begin();

	for (int i = 0; i < list.length(); i++)
	{
		cout << *iterator << "\n";
		++iterator;
	}

	printf("\n");

	list2 = list;
	count = list2.length();
	list2.print();

	iterator = list2.begin();

	for (int i = 0; i < list2.length(); i++)
	{
		cout << *iterator << "\n";
		++iterator;
	}

	list2.destroyList();
	list2.print();
	
	system("pause");
	return 0;
}