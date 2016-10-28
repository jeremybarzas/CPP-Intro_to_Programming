 #pragma once
#include <iostream>
#include <cassert>

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

	bool operator == (Vector2<T> other)
	{
		if (other.x == x && other.y == y)
			return true;
		
		return false;
	};

	// Addition
	Vector2<T> operator + (Vector2<T> other)
	{
		T a = a = this->x + other.x;
		T b = b = this->y + other.y;

		return Vector2<T>(a, b);
	};

	// Subtraction
	Vector2<T> operator - (Vector2<T> other)
	{
		T a = a = this->x - other.x;
		T b = b = this->y - other.y;

		return Vector2<T>(a, b);
	};

	// Scalar Multiplication
	Vector2<T> operator * (T other)
	{
		T a = other * this->x;
		T b = other * this->y;

		return Vector2<T>(a, b);
	};

	// Magnitude
	T Mag()
	{
		T mag = sqrt((this->x * this->x) + (this->y * this->y));

		return mag;
	}

	// Normalize Vector
	Vector2<T> Normalize()
	{
		T mag = this->Mag();

		return Vector2<T>((this->x / mag), (this->y / mag));
	}

	// Dot Product
	Vector2<T>DotProduct(Vector2<T> other)
	{
		Vector2 norm = this->Normalize();

		T dotP = (norm.x * other.x) + (norm.y * other.y);

		return dotP;
	}
};

template<class T>
class Vector3
{
private:
	T x;
	T y;

public:
	Vector3() {};

	Vector3(T a, T b)
	{
		x = a;
		y = b;
	};

	~Vector3() {};

	bool operator == (Vector3<T> other)
	{
		if (other.x == x && other.y == y)
			return true;

		return false;
	};

	// Addition
	Vector3<T> operator + (Vector3<T> other)
	{
		T a = a = this->x + other.x;
		T b = b = this->y + other.y;

		return Vector3<T>(a, b);
	};

	// Subtraction
	Vector3<T> operator - (Vector3<T> other)
	{
		T a = a = this->x - other.x;
		T b = b = this->y - other.y;

		return Vector2<T>(a, b);
	};

	// Scalar Multiplication
	Vector3<T> operator * (T other)
	{
		T a = other * this->x;
		T b = other * this->y;

		return Vector3<T>(a, b);
	};

	// Magnitude
	T Mag()
	{
		T mag = sqrt((this->x * this->x) + (this->y * this->y));

		return mag;
	}

	// Normalize Vector
	Vector3<T> Normalize()
	{
		T mag = this->Mag();

		return Vector3<T>((this->x / mag), (this->y / mag));
	}

	// Dot Product
	T DotProduct(Vector3<T> other)
	{
		Vector3 norm = this->Normalize();

		T dotP = (norm.x * other.x) + (norm.y * other.y);

		return dotP;
	}

	// Cross Product
	static Vector3<T> CrossProduct(Vector3<T> a, Vector3<T> b)
	{
		// 1 x 2 = ((1y * 2z - 1z * 2y), (1z * 2x - 1x * 2z), (1x * 2y - 1y * 2x))
		T ex = ((a.y * b.z) - (a.z * b.y));
		T why = (a.z * b.x) - (a.x * b.z);
		T zee = ((a.x * b.y) - (a.y * b.x));
	
		return Vector3<T>(ex, why, zee);
	}
};