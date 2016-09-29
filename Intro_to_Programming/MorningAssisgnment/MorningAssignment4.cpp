#include <iostream>

class Cat
{
private:
	char m_name;

public: 
	Cat() {};

	void NameMe(char);
};

int main()
{
	Cat catArry[26];

	int i = 0;
	int j = 1;

	char u = 'A';
	char l = 'b';

	int count = 0;

	while (count < 13)
	{
		catArry[i].NameMe(u);
		u += 2;
		i += 2;

		catArry[j].NameMe(l);
		l += 2;
		j += 2;

		count++;
	}

	system("pause");

	return 0;
}

void Cat::NameMe(char n)
{
	m_name = n;
}