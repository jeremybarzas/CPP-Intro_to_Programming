#include "VectorMath.h"

int main()
{
	Vector2<int> a = { 1, 0 };
	
	Vector2<int> b = { 0, 1 };

	Vector2<int> c = { 1, 1 };

	assert(a + b == c);

	Vector2<int> d = { 1,1 };

	d.Mag();

	Vector2<int> e = { 2,2 };
	Vector2<int> f = { 3,2 };

	int DP = e.DotProduct(f);

	system("pause");
	return 0;
}