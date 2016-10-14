#include "WeaponDPS.h"

int main()
{
	srand(time(NULL));
	rand() % 100 + 1; // random number up to 100 starting at 1

	//Weapon sword = Weapon("sword", 1.72, 278, 802);

	//sword.DamagePerSecond();

	Character player = Character("Facehead");

	float dmg = player.swingAttack();

	system("pause");

	return 0;
}