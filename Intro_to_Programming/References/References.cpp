#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;


class Student
{
public:
	string name;
	int age;
	int weight;
	int Id;

	Student::Student() {};

	Student::Student(string n, int a, int w, int i)
	{
		name = n;
		age = a;
		weight = w;
		Id = i;
	}

	void printContents()
	{
		cout << "Name: " << name << "\nAge: " << age << "\nWeight: " << weight << "\nId: " << Id <<"\n\n";
	
	}
};

void studentSwap(Student &a, Student &b)
{
	Student temp;
	temp = a;
	a = b;
	b = temp;

	return;
}

int main()
{
	Student Jeremy = Student("Jeremy", 25, 175, 1337 );
	Student Derrick = Student("Derrick", 21, 160, 3123);

	Jeremy.printContents();
	Derrick.printContents();

	studentSwap(Jeremy, Derrick);

	printf("Values after swap fucntion \n\n");

	Jeremy.printContents();
	Derrick.printContents();

	system("pause");

	return 0;
}



