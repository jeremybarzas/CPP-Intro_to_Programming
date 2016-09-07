#include "MiniGames_Header.h";

int main()
{
	
	int input = -1;
	bool running = true;

	while (running == true)
	{
		cout << "1. Coin Toss\n\n2. Rock Paper Scissors\n\n";
		cout << "What game do you want to play? ";

		cin >> input;
		while (!cin)
		{
			cin.clear();
			cin.ignore();
			cin >> input;
		}
		cout << "\n";

		system("cls");

		switch (input)
		{
		case 1: CoinToss(); break;

		case 2: RockPaperScissors(); break;

		case 3: TicTacToe(); break;

		case 0: running = false;
		}
	}

	system("pause");

	return 0;
}