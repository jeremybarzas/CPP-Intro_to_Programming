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

	cout << "The array of: int collection[-20]; is invalid \n \n";

	cout << "The array of: int hours[3] = 8, 12, 16; is invalid \n \n";
}

void arrayQuestion2()
{
	int values[] = { 2, 6, 10, 14 };

	cout << "The line, cout << values[2], will display:" << values[2] << endl;
	cout << endl;
}

void arrayQuestion3()
{

}

int main(int argc, char*argv[])
{
	cout << "number of arguments are " << argc << endl;;
	cout << "the commands that you entered are " << endl;
	bool debug;
	char* words[2] = { "hello", "-d" };

	if (words[1] == "world")
		printf("FUUUUUUUUUUUUUUUUUUUUUUUUUHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH");

	for (int i = 0; i < argc; ++i)
	{
		printf("argv[%i] is %s \n", i, argv[i]);
		if (argv[i][0] == '-')
		{
			printf("it's a dash\n");
			if (argv[i][1] == 'd')
				debug = true;
		}
	}

	if (debug)
		printf("mofuckin debug dog....\n");


	char input = 0;

	while (input != 'q')
	{
		cout << "Pick an Question # or press q to quit.\n";
		cin >> input;

		switch (input)
		{
			case '1': arrayQuestion1();  break;

			case '2': arrayQuestion2();  break;

			case '3': arrayQuestion3();

			default: break;
		}
	}

	system("pause");

	return 0;
}