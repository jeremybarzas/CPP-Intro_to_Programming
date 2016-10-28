#include "LinkedList.h"

int main()
{	
	// linked list of nodes that are templated to integers.
	LinkedList<int> list = LinkedList<int>();

	list.Add(1);
	list.Add(2);
	list.Add(3);
	list.Add(4);
	list.Add(5);

	int count = list.length();
	int front = list.front();

	///////////////////////////////
	Node<int> * Head;
	Node<int> a, b, c;

	a.info = 0;
	b.info = 2;
	c.info = 4;

	Head = &c;
	c.next = &b;
	b.next = &a;

	cout << Head->info;
	cout << c.next->info;
	cout << b.next->info;

	printf("\n\n");

	system("pause");
	return 0;
}