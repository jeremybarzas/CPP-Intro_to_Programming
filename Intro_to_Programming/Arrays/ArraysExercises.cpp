#include <iostream>

using namespace std;

void arrayQuestion1()
{
	cout << "The array of: int numbers[10] = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 1 }; is valid \n \n";

	cout << "The array of: int matrix[5] = { 1, 2, 3, 4, 5, 6, 7 }; is invalid \n \n";

	cout << "The array of: double radii[10] = (3.2, 4.7}; is invalid \n \n";

	cout << "The array of: int table[7] = { 2, , , 27, , 45, 39 }; is invalid \n \n";

	cout << "The array of: char codes[] = { 'A', 'X', '1', '2', 's' }; is valid \n \n";

	cout << "The array of: int blanks[]; is invalid \n \n";

	cout << "The array of: int collection[-20]; invalid \n \n";
	
	cout << "The array of: int hours[3] = 8, 12, 16; invalid \n \n";
}

int main()
{
	char input = 0;

	while (input != 'q')
	{
		cout << "Pick an Question # or press q to quit.\n";
		cin >> input;

		switch (input)
		{
			case '1': arrayQuestion1();  break;

			default: break;
		}
	}

	system("pause");
	
	return 0;
}