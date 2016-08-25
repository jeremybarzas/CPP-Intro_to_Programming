#include <iostream>
#include <string>


int print(std::string a, int b, int c)
{
	int d;

	std::cout << "The words you passed as the first parameter are: " << a << "\n \n";

	std::cout << "The integer you passed as the 2nd parameter is: " << b << "\n \n";

	std::cout << "The integer you passed as the 3rd parameter is: " << c << "\n \n";

	d = b + c;

	return d;
}

int main()
{
	int sum;

	sum = print("These are the words you entered as a parameter. ", 1, 2);

	std::cout << "The sum of the numbers you pass and the 2nd and 3rd paramters is: " << sum << "\n \n";

	system("pause");
	return 0;
}