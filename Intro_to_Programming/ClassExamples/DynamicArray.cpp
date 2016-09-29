#include <iostream>

using std::cout;
class Stuff
{
	public:

	int size = 1;

	int * numArry = new int[size];

	int count = 0;

	Stuff() {};

	void addNums(int num)
	{
		if (count >= size)
		{
			int * buffer = new int[size * 2];

			for (int i = 0; i < size; i++)
			{
				buffer[i] = numArry[i];
			}

			delete numArry;

			numArry = buffer;
			
			size *=2;
		}

		numArry[count] = num;

		count++;
	};

};


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

	Stuff stuffs = Stuff();

	//stuffs.addNums(1123124);
	////cout << stuffs.numArry[0] << "\n\n";

	//stuffs.addNums(1232);
	////cout << stuffs.numArry[1] << "\n\n";

	//stuffs.addNums(3123);
	////cout << stuffs.numArry[2] << "\n\n";

	for (int i = 1; i < 10; i++)
	{
		stuffs.addNums(i);
	}

	for (int i = 0; i < stuffs.count; i++)
	{
		cout << stuffs.numArry[i] << "\n\n";
	}

	system("pause");

	return 0;
}

