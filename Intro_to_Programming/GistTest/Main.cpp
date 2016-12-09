#include "GistTest.h"

int main()
{
	// Question 1

	float answer = Sumby5(1, 2, 3);

	// Question 2

	int array[10];

	int * ptr = array;

	EvenPopulate(ptr, 10);

	// Question 3

	char word[11] = "HelloWorld";

	ReverseString(word);

	// Question 4

	Cat cats[26];

	int i = 0;

	char name = 'A';

	while(i < 26)
	{ 
		cats[i].NameMe(name);
		
		if( name > 64 && name < 90)
		{
			name += 33;
		}
		else
		{
			name -= 31;
		}
		i++;
	}

	// Question 5

	int nums[10] = { 9,2,3,4,2,3,3,8,9,10 };

	int mostCommon = MostCommon(nums, 10);

	// Question 6 

	int a = 1;
	int b = 3;

	SwapNum(a, b);

	// Question 7

	string arrayofstrings[3] = { "hello", "world", "stuff" };

	system("pause");
	return 0;
}