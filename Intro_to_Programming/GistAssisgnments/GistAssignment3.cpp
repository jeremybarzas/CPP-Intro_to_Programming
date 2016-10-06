#include <iostream>

using std::cout;

char * reverseArray(char *);

int main()
{
	char charArray[6] = {'h','e','l','l','o'};

	char * charptr = charArray;

	printf("before function: ");

	cout << charptr;

	printf("\n\n");

	charptr = reverseArray(charptr);

	printf("after function: ");

	cout << charptr;

	printf("\n\n");

	system("pause");

	return 0;
}

char * reverseArray(char * a)
{
	char* tmpArry = new char[6];
	
	for (int i = 0, j = 4; i < 5; i++, j--)
	{
		tmpArry[i] = a[j];
	}

	tmpArry[5] = '\0';

	return tmpArry;
}