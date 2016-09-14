#include "CustomStringClass.h"

int main()
{
	cString testWord1 = cString("things");
	cString testWord2 = cString("stuff");
	cString testWord3 = cString("stuff");
	cString testWord6 = ("ThInGs");
	
	printf("=============== Get the length of a cString ===============\n\n");

	printf("String to get size of: "); testWord1.printWord();
	cout << "Size of is: " << testWord1.sizeOf() << "\n\n";
	
	printf("String to get size of: "); testWord2.printWord();
	cout << "Size of is: " << testWord2.sizeOf() << "\n\n";

	printf("=============== Accessing a character at a certain index ===============\n\n");
	
	printf("String to get index of: "); testWord1.printWord();
	cout << "Character at index 4 is: " << testWord1.atIndex(4) << "\n\n"; 
	
	printf("String to get index of: "); testWord2.printWord();
	cout << "Character at index 2 is: " << testWord2.atIndex(2) << "\n\n";

	printf("=============== Comparing on cString to another cString ===============\n\n");
	
	// -1 if before, 0 if same, 1 if after
	int same = testWord2.compare(testWord3); // "stuff".compare("stuff") should be 0

	printf("Word 1: "); testWord2.printWord();
	printf("Word 2: "); testWord3.printWord();
	printf("Compare function output: %i \n\n", same);

	int lexAfter = testWord2.compare(testWord1); // "stuff" .compare("things") should be -1

	printf("Word 1: "); testWord2.printWord();
	printf("Word 2: "); testWord1.printWord();
	printf("Compare function output: %i \n\n", lexAfter);

	int lexBefore = testWord1.compare(testWord2); // "things".compare("stuff") should be 1

	printf("Word 1: "); testWord1.printWord();
	printf("Word 2: "); testWord2.printWord();
	printf("Compare function outcome: %i \n\n", lexBefore);

	printf("=============== Appending a cString to another cString ===============\n\n");

	cString testWord4 = testWord1.append(testWord2);

	printf("Word 1: "); testWord1.printWord();
	printf("Word 2: "); testWord2.printWord();
	printf("Append function outcome: ");
	testWord4.printWord();

	printf("=============== Prepending a cString to another cString ===============\n\n");

	cString testWord5 = testWord1.prepend(testWord2);

	printf("Word 1: "); testWord1.printWord();
	printf("Word 2: "); testWord2.printWord();
	printf("Prepend function outcome: ");
	testWord5.printWord();

	printf("=============== Return a cString as a constant C-style string ===============\n\n");





	printf("=============== Convert all characters in cString to lowercase ===============\n\n");

	cString testWord7 = testWord6.lowerCase();

	printf("Word before modification is: "); testWord6.printWord();

	testWord7.printWord();
	
	printf("=============== Convert all characters in cString to uppercase ===============\n\n");
	
	cString testWord8 = testWord6.upperCase();
	
	printf("Word before modification is: "); testWord6.printWord();
	
	testWord8.printWord();

	printf("=============== Find a sub-string within a cString ===============\n\n");

	cString subString1 = cString("th");
	cString subString2 = cString("suff");

	bool found1 = testWord1.subString(subString1);
	bool found2 = testWord2.subString(subString2);

	printf("Sub-string to search for: "); subString1.printWord();

	printf("Searching for sub-string within: "); testWord1.printWord();

	(found1 == true) ? printf("Found sub-string\n\n") : printf("Did not find sub-string\n\n");

	printf("Sub-string to search for: "); subString2.printWord();

	printf("Searching for sub-string within: "); testWord2.printWord();

	(found2 == true) ? printf("Found sub-string\n\n") : printf("Did not find sub-string\n\n");



	system("pause");
	
	return 0;
}