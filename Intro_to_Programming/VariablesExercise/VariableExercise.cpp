#include <iostream>

int main()
{
	// 1. Find the value of each expression
	int a1 = 2 / 3 + 3 / 5;
	int b1 = 2 % 3 + 3 % 5;
	int c1 = 23 % 15 % - 2;
	int d1 = 25 * 1 / 2;
	float e1 = 25 * 1.0 / 2;
	int f1 = 25 * (1 / 2);
	int g1 = 235 / 8 + 7;
	float h1 = 235 / 8.0 + 7;
	int i1 = ((20 + 1) / 2 - 2.0) / (23 + 3) * 0.2;

	std::cout << "2 / 3 + 3 / 5 = " << a1 << std::endl;
	printf("\n");

	std::cout << "2 % 3 + 3 % 5 = " << b1 << std::endl;
	printf("\n");

	std::cout << "23 % 15 % - 2 = " << c1 << std::endl;
	printf("\n");
	
	std::cout << "25 * 1 / 2 = " << d1 << std::endl;
	printf("\n");

	std::cout << "25 * 1.0 / 2 = " << e1 << std::endl;
	printf("\n");

	std::cout << "25 * (1 / 2) = " << f1 << std::endl;
	printf("\n");

	std::cout << "235 / 8 + 7 = " << g1 << std::endl;
	printf("\n");

	std::cout << "235 / 8.0 + 7 = " << h1 << std::endl;
	printf("\n");

	std::cout << "((20 + 1) / 2 - 2.0) / (23 + 3) * 0.2 = " << i1 << std::endl;
	printf("\n");

	// 2. Select the variable names you might use for:

	//average height of students in your class
	int avgHeight;

	// the taz rate for income over $65000
	int taxrateover65000;

	//the tax rate below $5000
	int taxrate8below5000;

	//the total cost of all gmaes on your steam library
	int steamlibvalue;

	// 3. Select the suitable data types to hold the following values.

	int a3 = 121;
	float b3 = 9.4;
	char c3 = 'r';
	int d3 = 100000;
	bool e3 = false;

	// 4. Create a program that swaps two numbers.

	
	int swapnum1 = 1;
	int swapnum2 = 2;
	int temp = swapnum1;

	std::cout << "first number is: " << swapnum1 << std::endl;
	printf("\n");

	std::cout << "second number is: " << swapnum2 << std::endl;
	printf("\n");

	swapnum1 = swapnum2;

	std::cout << "first number's new value is: " << swapnum1 << std::endl;
	printf("\n");

	swapnum2 = temp;

	std::cout << "second number's new value is: " << swapnum2 << std::endl;
	printf("\n");
	
	// 5. Consider the following code.

	int i = 0;
	float f = 0;
	char ch = 'a';
	std::cin >> i >> ch >> f;
	std::cout << "i: " << i << "\nch: " << ch << "\nf: " << f << std::endl;

	// a) i: 1
	//    ch: A
	//    f: 45
	
	// b) i: 1
	//    ch: A
	//    f: 45
	
	// c) i: 1
	//    ch: 9
	//    f: 45
	
	// d) i: 1
	//    ch: 9
	//    f: 45
	
	// e) i: 0
	//    ch: a
	//    f: 0
	
	// f) i: 1
	//    ch: B
	//    f: 0

	// 6. Ask the user for 5 while numbers. Output the average of these numbers.

	int a6;
	int b6;
	int c6;
	int d6;
	int e6;
	int avg;

	std::cout << "Enter 5 while numbers pressing enter between each number." << std::endl;
	std::cin >> a6 >> b6 >> c6 >> d6 >> e6;

	avg = (a6 + b6 + c6 + d6 + e6) / 5;

	std::cout << "The average of the entered numbers is: " << avg << std::endl;
	printf("\n");

	system("pause");

	return 0;
}