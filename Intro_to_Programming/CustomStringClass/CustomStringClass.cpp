#include "CustomStringClass.h"

int main()
{
	cString testWord1 = cString("things");
	
	cout << testWord1.chars << "\n\n";

	cString testWord2 = cString("stuff");

	cout << testWord2.chars << "\n\n";
	
	system("pause");
	
	return 0;
}