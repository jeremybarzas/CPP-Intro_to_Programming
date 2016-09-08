#include "CustomStringClass.h"
#include "assert.h"

int main()
{
	Student Jeremy = Student("jeremy", 1337, 25, 175, false);
	Student Regie = Student("Regie", 9001, 21, 230, true);

	

	cout << "Jeremy after definiton / before swap fucntion\n\n"<< Jeremy.name << "\n" << Jeremy.ID << "\n" << Jeremy.age << "\n" << Jeremy.weight << "\n\n";
	cout << "Regie after definiton / before swap fucntion\n\n" << Regie.name << "\n" << Regie.ID << "\n" << Regie.age << "\n" << Regie.weight << "\n\n";

	Student students[2] = { Jeremy, Regie };

	studentSwap(students[0], students[1]);

	cout << Jeremy.name << "\n" << Jeremy.ID << "\n" << Jeremy.age << "\n" << Jeremy.weight << "\n\n";
	cout << Regie.name << "\n" << Regie.ID << "\n" << Regie.age << "\n" << Regie.weight << "\n\n";

	/*=======================================================*/
	cout << "==============BEGIN COMPARE TEST Cstring=======\n\n";

	cString testWord1 = cString("things");
	cString testWord2 = cString("stuff");
	cString testWord3 = cString("stuff");
	cString testWord4 = testWord1.append(testWord2);
	testWord4.printWord();

	
	//cout << testWord1.chars << "\n\n";	
	//cout << testWord2.chars << "\n\n";
	
	/*=======================================================*/
	cout << "=======================================================\n\n";

	cout << testWord1.sizeOf() << "\n\n";
	cout << testWord2.sizeOf() << "\n\n";

	/*=======================================================*/
	cout << "=======================================================\n\n";

	cout << testWord1.atIndex(4) << "\n\n";
	cout << testWord2.atIndex(2) << "\n\n";

	/*=======================================================*/
	cout << "=======================================================\n\n";

	int same = testWord2.compare(testWord3); //stuff.compare(stuff)
	//-1 if before 0 if same 1 if after
	//example: 't' is before 'u' -1
	//t is after s so 1
	//if you compare against two non equal length then the shorter will be -1 if all of it's characters
	//are before up to that point
	cout << "same is: " << same << " and it should have been: 0\n\n";

	assert(testWord2.compare(testWord1) == -1, "not negative 1"); // "stuff" .compare("things") should be -1
	
	
	int lexBefore = testWord1.compare(testWord2); // things.compare(stuff)
	

	/*=======================================================*/
	cout << "=======================================================\n\n";

	//cout << testWord1.append(testWord2) << "\n\n";
	//cout << testWord2.append(testWord1) << "\n\n";




	system("pause");
	
	return 0;
}