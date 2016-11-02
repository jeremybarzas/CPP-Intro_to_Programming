#include "LinkedList.h"

int main()
{
	// linked list of nodes that are templated to integers.
	LinkedList<int> list = LinkedList<int>();

	list.insertLast(1);
	list.insertLast(2);
	list.insertLast(3);
	list.insertLast(4);
	list.insertLast(5);

	list.print();
	
	system("pause");
	return 0;
}