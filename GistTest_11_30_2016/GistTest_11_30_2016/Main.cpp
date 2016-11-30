#include "GistTest.h"

int main()
{
	GistTest GT = GistTest();

	// Question 1
	int intVal = GT.SumBy5(1, 2, 3);
	float floatVal = GT.SumBy5(1.2f, 3.4f, 5.6f);

	// Question 2
	int size = 10;

	int * Ptr = new int[size];

	GT.EvenArray(Ptr, size);

	// Question 3
	char ArryToBeMod[11] = { 'H','e','l','l','o','W','o','r','l','d'};

	GT.RevrsArry(ArryToBeMod);

	// Question 4
	Cat CatArray[26];

	CatArray[0].NameMe('A');
	CatArray[1].NameMe('b');
	CatArray[2].NameMe('C');
	CatArray[3].NameMe('d');
	CatArray[4].NameMe('E');
	CatArray[5].NameMe('f');
	CatArray[6].NameMe('G');
	CatArray[7].NameMe('h');
	CatArray[8].NameMe('I');
	CatArray[9].NameMe('j');
	CatArray[10].NameMe('K');
	CatArray[11].NameMe('l');
	CatArray[12].NameMe('M');
	CatArray[13].NameMe('n');
	CatArray[14].NameMe('O');
	CatArray[15].NameMe('p');
	CatArray[16].NameMe('Q');
	CatArray[17].NameMe('r');
	CatArray[18].NameMe('S');
	CatArray[19].NameMe('t');
	CatArray[20].NameMe('U');
	CatArray[21].NameMe('v');
	CatArray[22].NameMe('W');
	CatArray[23].NameMe('x');
	CatArray[24].NameMe('Y');
	CatArray[25].NameMe('z');

	// Question 5

	int IntArry[10] = { 1, 2, 2, 4, 5, 2, 2, 9, 9, 10 };

	int * IntArryPtr = IntArry;

	int MstCmnInt = GT.MostCommonInt(IntArryPtr, 10);

	// Question 6
	int a = 3;
	int b = 1;

	GT.SwapNum(a, b);

	// Question 7

	system("pause");

	return 0;
};