#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using std::string;
using std::cout;
using std::cin;

struct Player;
struct Enemy;

struct Player
{
	string name;
	int health = 1000;
	int str = 50;
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

	bool playerAlive = true;

	bool enemy1Alive = true;
	bool enemy2Alive = true;
	bool enemy3Alive = true;

	cout << "Please enter the name of your character: ";
	cin >> player1.name;
	system("cls");

	cout << "Welcome " << player1.name << "!!!\n\n";
	cout << "You must defeat all enemies without dying to win.\n\n";
	cout << "Enter a number from 1 - 3 to select an enemy to attack.\n\n";

	system("pause");
	system("cls");

	while (gameOver == false)
	{
		if (input < 0)
		{
			printInfo(player1, enemy1, enemy2, enemy3);

			cout << "A group of 3 enemies surrounds you...\n\nWhich one do you want to attack: ";
		}

		else if (input > 3 || input < 1)
		{
			printInfo(player1, enemy1, enemy2, enemy3);

			cout << "The number you entered was not a correct seleciton.\n\n";
			cout << "Enter a number from 1 - 3 to select an enemy to attack.\n\n";
			cout << "Please chose another enemy to attack : ";
		}

		else
		{
			printInfo(player1, enemy1, enemy2, enemy3);

			cout << "Chose another enemy to attack: ";
		}

		cin >> input;
		system("cls");

		switch (input)
		{
		case 1:
			if (enemy1Alive == false)
			{
				cout << enemy1.name << " is already dead...\n\n";
			}
			
			else if (enemy1Alive == true)
			{
				enemy1Alive = player1.attack(enemy1);

				if (enemy1Alive == false)
				{
					cout << enemy1.name << " has died...\n\n";
				}

				if (enemy1Alive == true)
				{
					playerAlive = enemy1.attack(player1);
				}
			}

			break;

		case 2:
			if (enemy2Alive == false)
			{
				cout << enemy2.name << " is already dead...\n\n";
			}

			else if (enemy2Alive == true)
			{
				enemy2Alive = player1.attack(enemy2);

				if (enemy2Alive == false)
				{
					cout << enemy2.name << " has died...\n\n";
				}

				if (enemy2Alive == true)
				{
					playerAlive = enemy2.attack(player1);
				}
			}

			break;

		case 3:
			if (enemy3Alive == false)
			{
				cout << enemy3.name << " is already dead...\n\n";
			}

			else if (enemy3Alive == true)
			{
				enemy3Alive = player1.attack(enemy3);

				if (enemy3Alive == false)
				{
					cout << enemy3.name << " has died...\n\n";
				}
			
				if (enemy3Alive == true)
				{
					playerAlive = enemy3.attack(player1);
				}
			}

			break;
		}

		if (playerAlive == false)
		{
			printInfo(player1, enemy1, enemy2, enemy3);

			cout << player1.name << " has died...\n\n";
			cout << "You suck so bad you should alt + f4 and uninstall...\n\n";
			gameOver = true;
		}

		else if (enemy1Alive == false && enemy2Alive == false && enemy3Alive == false)
		{
			printInfo(player1, enemy1, enemy2, enemy3);

			cout << "All enemies are dead...\n\n";
			cout << "Congradulations you won the game!!!\n\n";
			gameOver = true;
		}
	}

	system("pause");

	return 0;
}

void printInfo(Player p , Enemy e1, Enemy e2, Enemy e3)
{
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

		cout << name << " swung for " << atkDmg << " damage at " << e.name << ".\n\n";

		if (e.health <=0)
		{
			e.alive = false;
		}

		return e.alive;
	}
}

bool Enemy::attack(Player &p)
{
	if (p.alive == false)
	{
		return p.alive;
	}

	else if (p.alive == true)
	{
		bool savingThrow = false;
		int block;

		int atkDmg = rand() % str + 50;

		savingThrow = rand() % 2;

		if (savingThrow == true)
		{
			block = rand() % 50 + 25;

			int dmg = atkDmg;

			atkDmg = (block >= atkDmg) ? 0 : atkDmg - block;

			p.health -= atkDmg;

			cout << name << " swung for " << dmg << " damage at " << p.name << ".\n\n";
			cout << "You successfully blocked " << block << " from the attack!\n\n";
			cout << "Only " << atkDmg - block << " damage went through.\n\n";
		}

		else if (savingThrow == false)
		{
			p.health -= atkDmg;

			cout << name << " swung for " << atkDmg << " damage at " << p.name << ".\n\n";
		}
		
		if (p.health <= 0)
		{
			p.alive = false;
			return p.alive;
		}
	}
}