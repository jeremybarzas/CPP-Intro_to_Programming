#pragma once

#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using std::string;
using std::cout;
using std::cin;

void CoinToss();

void RockPaperScissors();

void DiceRoll();

void TicTacToe();

//===================================================//

void CoinToss()
{
	srand(time(NULL));

	int input = 0;

	bool running = true;

	bool playerChoice = true;

	bool headsorTails = true;

	while (running == true)
	{
		playerChoice = true;
		headsorTails = true;

		cout << "Enter a 3 at any time to quit playing.\n\n";
		cout << "1. Heads\n\n2. Tails\n\n";
		cout << "Choose heads or tails: ";

		cin >> input;
		while (!cin)
		{
			cin.clear();
			cin.ignore();
			cin >> input;
		}
		cout << "\n";

		//===================================================//

		if (input == 1)
		{
			playerChoice = true;
			headsorTails = rand() % 2;

			if (playerChoice == true)
			{
				cout << "You chose heads.\n\n";
			}
		}

		if (input == 2)
		{
			playerChoice = false;
			headsorTails = rand() % 2;

			if (playerChoice == false)
			{
				cout << "You chose tails.\n\n";
			}
		}

		if (input == 3)
		{
			running = false;
		}

		//===================================================//

		if (headsorTails == true && playerChoice == true)
		{
			cout << "It was heads you win.\n\n";
		}
		else if (headsorTails == true && playerChoice == false)
		{
			cout << "It was heads you lost...\n\n";
		}

		else if (headsorTails == false && playerChoice == false)
		{
			cout << "It was tails you win.\n\n";
		}
		else if (headsorTails == false && playerChoice == true)
		{
			cout << "It was tails you lost...\n\n";
		}
		system("pause");
		system("cls");
	}
}

void RockPaperScissors()
{
	srand(time(NULL));

	bool runningMan = true;
	int input;

	int rps = 0;
	int playerChoice = -1;

	while (runningMan)
	{
		cout << "Enter a 4 at any time to quit playing.\n\n";
		cout << "1. Rock\n\n2. Paper\n\n3. Scissors\n\n";
		cout << "Choose rock, paper, or scissors: ";

		cin >> input;
		while (!cin)
		{
			cin.clear();
			cin.ignore();
			cin >> input;
		}
		cout << "\n";

		switch (input)
		{
		case 1:
			playerChoice = input;
			rps = rand() % 3 + 1;
			break;

		case 2:
			playerChoice = input;
			rps = rand() % 3 + 1;
			break;

		case 3:
			playerChoice = input;
			rps = rand() % 3 + 1;
			break;

		case 4: runningMan = false;
		}

		//===================================================//

		if (playerChoice == 1)
		{
			cout << "You chose rock\n\n";
		}

		if (playerChoice == 2)
		{
			cout << "You chose paper\n\n";
		}

		if (playerChoice == 3)
		{
			cout << "You chose scissors\n\n";
		}

		//===================================================//

		if (rps == 1)
		{
			cout << "Computer chose rock.\n\n";
		}

		else if (rps == 2)
		{
			cout << "Computer chose paper.\n\n";
		}

		else if (rps == 3)
		{
			cout << "Computer chose scissors.\n\n";
		}

		//===================================================//

		if (playerChoice == rps)
		{
			cout << "Its a tie!\n\n";
		}
		if (playerChoice == 1 && rps == 3)
		{
			cout << "Rock beats scissors, you win!!!\n\n";
		}
		if (playerChoice == 1 && rps == 2)
		{
			cout << "Paper beats rock, you lose...\n\n";
		}
		if (playerChoice == 2 && rps == 1)
		{
			cout << "Paper beats rock, you win!!!\n\n";
		}
		if (playerChoice == 2 && rps == 3)
		{
			cout << "Scissors beat paper, you lose...\n\n";
		}
		if (playerChoice == 3 && rps == 2)
		{
			cout << "Scissors beats paper, you win!!!\n\n";
		}
		if (playerChoice == 3 && rps == 1)
		{
			cout << "Rock beats scissors, you lose...\n\n";
		}

		system("pause");
		system("cls");
	}
}

void DiceRoll()
{

}

void TicTacToe()
{

}