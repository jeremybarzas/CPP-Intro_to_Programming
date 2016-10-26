#include "TemplateExcersises.h"

int main()
{
	Bucket<int> integerbucket = Bucket<int>();
	Bucket<char> characterbucket = Bucket<char>();

	integerbucket.Add(1);
	integerbucket.Add(222);
	integerbucket.Add(3);
	integerbucket.Add(5453);

	characterbucket.Add('A');
	characterbucket.Add('B');
	characterbucket.Add('c');
	characterbucket.Add('f');

	int intA = integerbucket.Operator(0);
	int intB = integerbucket.Operator(1);
	int intC = integerbucket.Operator(2);
	int intD = integerbucket.Operator(3);
	
	char charA = characterbucket.Operator(0);
	char charB = characterbucket.Operator(1);
	char charC = characterbucket.Operator(2);
	char charD = characterbucket.Operator(3);

	system("pause");
	return 0;
}