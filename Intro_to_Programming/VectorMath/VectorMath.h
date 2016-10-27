 #pragma once
#include <iostream>

template<class T>
class Vector2
{
private:
	T x;
	T y;

public:
	Vector2() {};

	Vector2(T a, T b) 
	{
		x = a;
		y = b;
	};
	
	~Vector2() {};

	Vector2<T> operator + (Vector2<T> other)
	{
		T a = a = this->x + other.x;
		T b = b = this->y + other.y;

		return Vector2<T>(a, b);
	};
	
	// static function
	static Vector2<T> add(Vector2<T> a, Vector2<T> b)
	{
		return a + b;
	};
};