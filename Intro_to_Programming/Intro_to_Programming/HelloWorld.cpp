#include <iostream>

int main()
{
	int input1;
	int input2;
	int sum;

	std::cout << "Hello World!" << std::endl;
	std::cout << std::endl;

	std::cout << "Enter an integer: ";
	std::cin >> input1;
	std::cout << std::endl;

	std::cout << "The integer you entered is: " << input1 << std::endl;
	std::cout << std::endl;

	std::cout << "Enter a second integer: ";
	std::cin >> input2;
	std::cout << std::endl;

	sum = input1 + input2;

	std::cout << "The first integer plus the second integer is: " << sum << std::endl;
	std::cout << std::endl;

	system("pause");

	return 0;
}