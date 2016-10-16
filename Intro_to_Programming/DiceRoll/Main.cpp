#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h> 

using std::cout;

bool winchance33();
void cointoss33(int);

bool winchance30();
void cointoss30(int);

int main()
{
	srand(time(NULL));

	cointoss33(100);

	cointoss30(100);

	system("pause");
	return 0;
}

bool winchance33()
{
	int num = rand() % 3;

	if (num == 1)
	{
		return true;
	}
	return false;
}

void cointoss33(int rounds)
{
	int plyrWins = 0;
	int cmptrWins = 0;

	for (int i = 0; i < rounds; i++)
	{
		if (winchance33() == true)
		{
			plyrWins += 1;
		}
		else
		{
			cmptrWins += 1;
		}
	}

	cout << "The player won " << plyrWins << " times.\n\n";
	cout << "The computer won " << cmptrWins << " times.\n\n";
}

bool winchance30()
{
	int num = rand() % 100 + 1;

	if (num >= 1 && num <= 30)
	{
		return true;
	}
	return false;
}

void cointoss30(int rounds)
{
	int plyrWins = 0;
	int cmptrWins = 0;

	for (int i = 0; i < rounds; i++)
	{
		if (winchance30() == true)
		{
			plyrWins += 1;
		}
		else
		{
			cmptrWins += 1;
		}
	}

	cout << "The player won " << plyrWins << " times.\n\n";
	cout << "The computer won " << cmptrWins << " times.\n\n";
}