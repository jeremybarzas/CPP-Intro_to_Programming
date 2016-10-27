#include "TemplateExcersises.h"

int main()
{
	char B = 'B';
	char a = 'a';

	char answer1 = Min<char>(B, a);
	char answer2 = Max<char>(B, a);

	int one = 1;
	int ten = 10;

	int answer3 = Min(one, ten);
	int answer4 = Max(one, ten);

	Bucket<int> integerbucket = Bucket<int>(2);

	integerbucket.Add(1);
	integerbucket.Add(222);
	integerbucket.Add(3);
	integerbucket.Add(5453);

	int intA = integerbucket.Operator(0);
	int intB = integerbucket.Operator(1);
	int intC = integerbucket.Operator(2);
	int intD = integerbucket.Operator(3);

	Bucket<char> characterbucket = Bucket<char>(2);

	characterbucket.Add('A');
	characterbucket.Add('B');
	characterbucket.Add('c');
	characterbucket.Add('f');
	characterbucket.Add('g');

	char charA = characterbucket.Operator(0);
	char charB = characterbucket.Operator(1);
	char charC = characterbucket.Operator(2);
	char charD = characterbucket.Operator(3);
	char charE = characterbucket.Operator(4);

	system("pause");
	return 0;
}