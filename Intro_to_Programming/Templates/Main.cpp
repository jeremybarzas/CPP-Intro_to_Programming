#include "Templates.h"

template <class Type>
Type larger(Type a, Type b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}	
}

int main()
{
	int a = 1;
	int b = 2;

	char lettera = 'a';
	char letterb = 'b';

	int answer1 = larger(a, b);
	char answer2 = larger(lettera, letterb);

	Bucket<char> bucket = Bucket<char>(10);

	bucket.Add(lettera);
	bucket.Add(letterb);

	bucket.info();

	return 0;
}