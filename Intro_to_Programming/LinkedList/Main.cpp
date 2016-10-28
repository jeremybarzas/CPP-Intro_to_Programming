#include "LinkedList.h"

int main()
{	
	// linked list of nodes that are templated to integers.
	LinkedList<Node<int>> list = LinkedList<Node<int>>();

	// deez need to be of this type (const T& node)
	Node<int> node1;
	Node<int> node2;
	Node<int> node3;
	Node<int> node4;
	Node<int> node5;

	node1.info = 100;
	node2.info = 200;
	node3.info = 300;
	node4.info = 400;
	node5.info = 500;

	list.Add(node1);
	list.Add(node2);
	list.Add(node3);
	list.Add(node4);
	list.Add(node5);

	int count = list.length();


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