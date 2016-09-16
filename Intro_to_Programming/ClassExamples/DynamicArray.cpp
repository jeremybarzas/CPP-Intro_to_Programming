#include <iostream>

using std::cout;

int main()
{
	// static array
	char arrayofChars[10] = { 'a','b','c','d','e','f','g','h','i','j' };

	cout << arrayofChars[8] << "\n\n";

	// dynamic array
	int newsize = 0;

	char * charArrayptr = new char[newsize];

	charArrayptr = "abcdefghij";

	cout << charArrayptr[8] << "\n\n";

	system("pause");

	return 0;
}