#include "CustomStringClass.h"

int main()
{
	
	
	
	cString testWord1 = cString("things");
	cString testWord2 = cString("stuff");
	cString testWord3 = cString("stuff");
	
	printf("\n========== Get the length of a cString ==========\n\n\n");

	printf("String to get size of: "); testWord1.printWord();
	cout << "Size of is: " << testWord1.sizeOf() << "\n\n";
	
	printf("String to get size of: "); testWord2.printWord();
	cout << "Size of is: " << testWord2.sizeOf() << "\n\n";

	printf("\n========== Accessing a character at a certain index ==========\n\n\n");
	
	printf("String to get index of: "); testWord1.printWord();
	cout << "Character at index 4 is: " << testWord1.atIndex(4) << "\n\n"; 
	
	printf("String to get index of: "); testWord2.printWord();
	cout << "Character at index 2 is: " << testWord2.atIndex(2) << "\n\n";

	printf("\n========== Comparing on cString to another cString ==========\n\n\n");
	
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

	printf("\n========== Appending a cString to another cString ==========\n\n\n");

	cString testWord4 = testWord1.append(testWord2);

	printf("Word 1: "); testWord1.printWord();
	printf("Word 2: "); testWord2.printWord();
	printf("Append function outcome: ");
	testWord4.printWord();

	printf("\n========== Prepending a cString to another cString ==========\n\n\n");

	cString testWord5 = testWord1.prepend(testWord2);

	printf("Word 1: "); testWord1.printWord();
	printf("Word 2: "); testWord2.printWord();
	printf("Prepend function outcome: ");
	testWord5.printWord();

	printf("\n========== Return a cString as a constant C-style string ==========\n\n\n");





	printf("\n========== Convert all characters in cString to lowercase ==========\n\n\n");

	cString testWord6 = ("ThInGs");
	cString testWord7 = testWord6.lowerCase();

	printf("Word before modification is: "); testWord6.printWord();

	printf("Word after modification is: "); testWord7.printWord();
	
	printf("\n========== Convert all characters in cString to uppercase ==========\n\n\n");
	
	cString testWord8 = testWord6.upperCase();
	
	printf("Word before modification is: "); testWord6.printWord();
	
	printf("Word after modification is: "); testWord8.printWord();

	printf("\n========== Find a sub-string within a cString ==========\n\n\n");

	cString subString1 = cString("hing");
	bool found1 = testWord1.subString(subString1);
	
	printf("Sub-string to search for: "); subString1.printWord();
	printf("Searching for sub-string within: "); testWord1.printWord();

	(found1 == true) ? printf("Found sub-string\n\n") : printf("Did not find sub-string\n\n");

	cString subString2 = cString("stf");
	bool found2 = testWord2.subString(subString2);

	printf("Sub-string to search for: "); subString2.printWord();
	printf("Searching for sub-string within: "); testWord2.printWord();

	(found2 == true) ? printf("Found sub-string\n\n") : printf("Did not find sub-string\n\n");

	printf("\n========== Find a sub-string within a cString starting at an index ==========\n\n\n");

	cString subString3 = cString("ings");
	bool found3 = testWord1.substringfromIndex(subString3, 2);
	
	printf("Sub-string to search for: "); subString3.printWord();
	printf("Searching for sub-string within: "); testWord1.printWord();
	printf("Starting at index: 2\n\n");

	(found3 == true) ? printf("Found sub-string\n\n") : printf("Did not find sub-string\n\n");

	cString subString4 = cString("stu");
	bool found4 = testWord2.substringfromIndex(subString4, 3);

	printf("Sub-string to search for: "); subString4.printWord();
	printf("Searching for sub-string within: "); testWord2.printWord();
	printf("Starting at index: 3\n\n");

	(found4 == true) ? printf("Found sub-string\n\n") : printf("Did not find sub-string\n\n");
	
	printf("\n========== Replacing a found sub-string with another sub-string ==========\n\n\n");
	
	cString testword8 = cString("the thi ngs");
	cString subString5 = cString("thi");
	cString subString6 = cString("facehead");

	//printf("Sub-string to search for: "); subString5.printWord();
	//printf("Sub-string to replace with: "); subString6.printWord();

	cString modifiedcString = testword8.replaceSubstring(subString5, subString6);


	system("pause");
	
	return 0;
}