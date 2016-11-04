#include "LinkedList.h"

int main()
{
	// linked list of nodes that are templated to integers.
	//LinkedList<int> list = LinkedList<int>();
	//LinkedList<int> list2 = LinkedList<int>();
	//
	//list.initializeList();
	//list2.initializeList();
	//
	//list.insertLast(1);
	//list.insertLast(2);
	//list.insertLast(3);
	//list.insertLast(4);
	//list.insertFirst(5);
	//list.insertFirst(6);
	//list.insertFirst(7);
	//list.insertFirst(8);

	//printf("control print check\n");
	//list.print();

	//int count = list.length();
	//bool found = list.search(10);

	//printf("delete node\n");
	//list.deleteNode(5);
	//list.print();
	//
	//count = list.length();

	//printf("using iterator to print\n");
	//LinkedListIterator<int> iterator = list.begin();

	//for (int i = 0; i < list.length(); i++)
	//{
	//	cout << *iterator << "\n";
	//	++iterator;
	//}
	//printf("\n");

	//printf("overloading assignment = operator\n");

	//list2 = list;

	//count = list2.length();
	//list2.print();

	//printf("using iterator to print list that has been assign to another list\n");
	//iterator = list2.begin();

	//for (int i = 0; i < list2.length(); i++)
	//{
	//	cout << *iterator << "\n";
	//	++iterator;
	//}
	//printf("\n");

	//printf("copy constructor\n");

	LinkedList<int> testlist1 = LinkedList<int>();

	testlist1.insertFirst(1);
	testlist1.insertLast(2);
	testlist1.insertLast(3);
	testlist1.insertLast(4);
	testlist1.insertLast(5);

	LinkedList<int> testlist2 = LinkedList<int>(testlist1);

	printf("before testlist1.deleteNode(3)\n\n");
	
	printf("testlist1.print()\n");
	testlist1.print();

	printf("testlist2.print()\n");
	testlist2.print();

	printf("after testlist1.deleteNode(3)\n\n");
	testlist1.deleteNode(3);

	printf("testlist1.print()\n");
	testlist1.print();
	
	printf("testlist2.print()\n");
	testlist2.print();

	system("pause");
	return 0;
}