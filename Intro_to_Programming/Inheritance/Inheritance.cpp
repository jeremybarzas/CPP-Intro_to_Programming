#include <iostream>
#include <string>
#include "stdlib.h"

using namespace std;
using std::string;
using std::cout;

class Animal
{
public:
	Animal() {};

	virtual void speak() = 0;
};

class Mammal : public Animal
{
public:
	Mammal() {};

	void speak()
	{
		printf("mammal speak\n\n");
	};

	void bark()
	{
		printf("mammal bark\n\n");
	};
};

class Bird : public Animal
{
public:
	Bird() {};

	void speak()
	{
		printf("Tweet\n\n");
	};
};

class Dog : public Mammal
{
public:
	Dog() {};

	void speak()
	{
		printf("Whoof\n\n");
	};

	void bark()
	{
		printf("Bark from dog\n\n");
	};

};

class Cat : public Mammal
{
public:
	Cat() {};

	void speak()
	{
		printf("Meow\n\n");
	};

	void purr()
	{
		printf("Purr\n\n");
	};

};

int main()
{
	Bird bird = Bird();
	Mammal mammal = Mammal();
	Dog dog = Dog();
	Cat cat = Cat();

	Animal * ptr;

	ptr = &bird;
	ptr->speak();

	ptr = &mammal;
	ptr->speak();

	ptr = &dog;
	ptr->speak();

	ptr = &cat;
	ptr->speak();

	system("pause");
	return 0; 
}