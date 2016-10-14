#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h> 

using std::string;

class Weapon
{
private:
	string m_name;
	float m_attackSpeed;
	float m_minimumDamage;
	float m_maximumDamage;

public:
	Weapon() {};
	~Weapon() {};
	Weapon(string n, float s, float min, float max)
	{
		m_name = n;
		m_attackSpeed = s;
		m_minimumDamage = min;
		m_maximumDamage = max;
	}

	float dmgRoll()
	{
		return (float)(rand() % (int)m_maximumDamage + (int)m_minimumDamage);
	}

	//dps = (damage / time) * attack speed
	float DamagePerSecond()
	{
		float a = (m_maximumDamage + m_minimumDamage) / 2;
		float b = 1 / m_attackSpeed;

		return a * b;
	}
};

class Character
{
private:
	string m_name;
	int m_health;
	int m_endurance; // adds to health
	int m_strength; // adds to attack dmg 
	int m_dexterity; // adds chance to score crit (attack dmg * 2)
	
public:
	Character() {};
	~Character() {};
	Character(string n)
	{
		m_name = n;
		m_strength = 1;
		m_endurance = 1;
		m_dexterity = 1;
	}

	Weapon m_weapon = Weapon("sword", 1.72, 278, 802);

	float swingAttack()
	{
		return m_weapon.dmgRoll() * m_strength;
	}
};