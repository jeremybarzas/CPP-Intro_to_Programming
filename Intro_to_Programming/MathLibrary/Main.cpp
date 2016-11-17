#include "MathLibrary.h"

int main()
{
	ofstream myfile;

	myfile.open("TestTextFile.txt");
	myfile << "If this works this text should appear in the text file.\n";
	myfile.close();

	UnitTest();

	return 0;
}