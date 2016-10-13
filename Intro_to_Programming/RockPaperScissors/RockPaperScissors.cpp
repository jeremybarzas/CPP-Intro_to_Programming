#include "RockPaperScissors.h"

BaseApp::BaseApp()
{
	gameover = false;
}

void BaseApp::Run()
{
	printf("The game is running.\n\n");
	while (!gameover)
	{
		Update();
	}
}

void BaseApp::Shutdown()
{
	printf("The game is shutting down.\n\n");
	gameover = true;
}

void RPS::Start()
{
	printf("The game is starting.\n\n");
	Run();
}

void RPS::Update()
{
	printf("The game is updating.\n\n");

	srand(time(NULL));
	int input;

	int rps = 0;
	int playerChoice = -1;

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

	case 4: Shutdown();
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