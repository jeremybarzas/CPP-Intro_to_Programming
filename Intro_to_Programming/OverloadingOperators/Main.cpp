#include "OverloadingOperators.h"

int main()
{
	Item ball1 = Item("ball");
	Item ball2 = Item("ball");
	Item box = Item("box");

	if (ball1 == ball2)
	{
		printf("same\n\n");
	}
	if (!(ball1 == box))
	{
		printf("different\n\n");
	}

	Item ballbox = ball1 + box;

	return 0;
}