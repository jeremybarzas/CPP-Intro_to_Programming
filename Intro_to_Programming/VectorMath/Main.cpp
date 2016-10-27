#include "VectorMath.h"

int main()
{
	Vector2<int> a = { 1, 0 };
	
	Vector2<int> b = { 0, 1 };

	Vector2<int> c = { 0, 0 };

	Vector2<int> d = { 0, 0 };

	c = a + b;

	//static function
	d = Vector2<int>::add(a, b);

	system("pause");
	return 0;
}