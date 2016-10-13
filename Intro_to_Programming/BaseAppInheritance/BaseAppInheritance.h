#pragma once
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

class BaseApp
{
public:
	void Start();
	void Run();
	virtual void Update() = 0;
	void Shutdown();

protected:
	bool gameover;

	BaseApp();
	~BaseApp() {};
};

class RPS : public BaseApp
{
public:
	void Update();

	RPS() {};
	~RPS() {};
};

class InfinaPrint : public BaseApp
{
public:
	void Update()
	{
		printf("Printin da stuff to da screen yo.\n\n");
	}

	InfinaPrint() {};
	~InfinaPrint() {};
};

class GameSelector : public BaseApp
{
public:
	void Update()
	{
		printf("The game is updating.\n\n");

		BaseApp * app;
		int input = 0;

		printf("1. Rock Paper Scissors\n2. Infinaprint\n3. To quit.\n");
		printf("Enter the number of the game you want to play: ");

		cin >> input;
		printf("\n");

		if (input == 1)
		{
			system("cls");
			app = new RPS();
			app->Start();
		}
		else if (input == 2)
		{
			system("cls");
			app = new InfinaPrint();
			app->Start();
		}
		else if (input == 3)
		{
			Shutdown();
		}

		system("cls");
	}

	GameSelector() {};
	~GameSelector() {};
};