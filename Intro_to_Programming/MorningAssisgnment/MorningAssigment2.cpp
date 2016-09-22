# include <iostream>

using std::cout;

char* reverseArray(char []);

int main()
{
	char charArray[5] = {'h','e','l','l','o'};

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

char * reverseArray(char a[])
{
	char* tmpArry = a;

	for (int i = 0; i < 5; i++)
	{
		
	}

	return a;
}
