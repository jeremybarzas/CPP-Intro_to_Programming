#include <iostream>

class Math
{
public:
	static int add(int a, int b)
	{
		return a + b;
	}
};

int main()
{
	int sum = Math::add(1, 2);

	return 0;
}