#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using std::string;
using std::cout;
using std::cin;
using std::endl;

struct Player;
struct Enemy;

struct Player
{
	string name;
	int health = 1000;
	int str = 50;
	int def = 25;
	bool alive = true;

	bool attack(Enemy&);
};

struct Enemy
{
	string name;
	int health;
	int str;
	bool alive;

	bool attack(Player&);
};

void printInfo(Player, Enemy, Enemy, Enemy);

int main()
{
	Player player1;
	
	Enemy enemy1 = { "Enemy 1", 100, 200, true };
	Enemy enemy2 = { "Enemy 2", 100, 200, true };
	Enemy enemy3 = { "Enemy 3", 100, 200, true };
	
	srand(time(NULL));
	int input = -1;
	bool gameOver = false;

	cout << "Please enter the name of your character: ";
	cin >> player1.name;
	system("cls");

	cout << "Welcome " << player1.name << "!\n\n";
	cout << "Enter a number from 1 - 3 to select an enemy to attack.\n\n";
	system("pause");
	system("cls");

	while (gameOver == false)
	{
		if (player1.alive == false)
		{
			break;
		}

		if (input < 0)
		{
			cout << "A group of 3 enemies surrounds you...\n\nWhich one do you want to attack: ";
		}
		else if (input > 3 || input < 1)
		{
			cout << "The number you entered was not a correct seleciton.\nPlease enter another choice: ";
		}
		else
		{
			cout << "Chose another enemy to attack: ";
		}

		printInfo(player1, enemy1, enemy2, enemy3);

		cin >> input;
		system("cls");

		switch (input)
		{
		case 1:
			if (player1.attack(enemy1) == false)
			{
				cout << enemy1.name << " is already dead...\n";
			}
			
			else if (player1.attack(enemy1) == true)
			{
				player1.attack(enemy1);
				enemy1.attack(player1);

				if (enemy3.attack(player1) == false)
				{
					cout << player1.name << " has died...\n\n";
					gameOver = true;
				}

				if (player1.attack(enemy1) == false)
				{
					cout << enemy1.name << " has died...\n\n";
				}
			}

			printInfo(player1, enemy1, enemy2, enemy3);

			break;

		case 2:
			if (player1.attack(enemy2) == false)
			{
				cout << enemy2.name << " is already dead...\n";
			}

			else if (player1.attack(enemy2) == true)
			{
				player1.attack(enemy2);
				enemy2.attack(player1);

				if (enemy3.attack(player1) == false)
				{
					cout << player1.name << " has died...\n\n";
					gameOver = true;
				}

				if (player1.attack(enemy2) == false)
				{
					cout << enemy2.name << " has died...\n\n";
				}
			}

			printInfo(player1, enemy1, enemy2, enemy3);

			break;

		case 3:
			if (player1.attack(enemy3)== false)
			{
				cout << enemy3.name << " is already dead...\n";
			}

			else if (player1.attack(enemy3) == true)
			{
				player1.attack(enemy3);
				enemy3.attack(player1);

				if (enemy3.attack(player1) == false)
				{
					cout << player1.name << " has died...\n\n";
					gameOver = true;
				}

				if (player1.attack(enemy3) == false)
				{
					cout << enemy3.name << " has died...\n\n";
				}
			}

			printInfo(player1, enemy1, enemy2, enemy3);
			
			break;
		}

		if (enemy3.attack(player1) == false || (enemy1.alive == false && enemy2.alive == false && enemy3.alive == false))
		{
			gameOver = true;
		}
	}

	if (gameOver == true && player1.alive == true)
	{
		cout << "Congradulations you won the game!!!\n\n";
	}
	else if (gameOver == true && player1.alive == false)
	{
		cout << "You suck so bad you should alt + f4 and uninstall...\n\n";
	}

	system("pause");

	return 0;
}

void printInfo(Player p , Enemy e1, Enemy e2, Enemy e3)
{
	cout << "\n\n";
	cout << p.name << "'s health is:" << p.health << "\n\n";
	cout << e1.name << "'s health is:" << e1.health << "\n";
	cout << e2.name << "'s health is:" << e2.health << "\n";
	cout << e3.name << "'s health is:" << e3.health << "\n\n";
}
bool Player::attack(Enemy &e)
{
	if (e.alive == false)
	{
		return e.alive;
	}

	else if (e.alive == true)
	{
		int atkDmg = rand() % str + 10;

		e.health -= atkDmg;

		cout << name << " dealt " << atkDmg << " to " << e.name << "\n\n";

		if (e.health <=0)
		{
			e.alive = false;
		}

		return e.alive;
	}
}

bool Enemy::attack(Player &p)
{
	if (alive == false)
	{
		return alive;
	}

	else if (p.alive == true)
	{
		bool savingThrow = false;
		int block;

		int atkDmg = rand() % str + 50;

		savingThrow = rand() % 2; //randomizing true or false for block to happen

		if (savingThrow == true)
		{
			block = rand() % 50 + 25;

			p.health -= (atkDmg - block);

			cout << name << " dealt " << atkDmg << " to " << p.name << "\n\n";
			cout << "You successfully blocked " << block << " from the attack!\n";
		}

		else if (savingThrow == false)
		{
			p.health -= atkDmg;

			cout << name << " dealt " << atkDmg << " to " << p.name << "\n";
		}

		if (p.health <= 0)
		{
			p.alive = false;
		}

		return p.alive;
	}
}