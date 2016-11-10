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
	T DotProduct(Vector2<T> other)
	{
		Vector2 normThis = this->Normalize();
		Vector2 normOther = other.Normalize();

		T dotP = (normThis.x * normOther.x) + (normThis.y * normOther.y);

		return dotP;
	}
};

template<class T>
class Vector3
{
private:
	T x;
	T y;
	T z;

public:
	Vector3() {};

	Vector3(T a, T b, T c)
	{
		x = a;
		y = b;
		z = c;
	};

	~Vector3() {};

	bool operator == (Vector3<T> other)
	{
		if (other.x == x && other.y == y && other.z == z)
			return true;

		return false;
	};

	// Addition
	Vector3<T> operator + (Vector3<T> other)
	{
		T a = this->x + other.x;
		T b = this->y + other.y;
		T c = this->z + other.z;

		return Vector3<T>(a, b, c);
	};

	// Subtraction
	Vector3<T> operator - (Vector3<T> other)
	{
		T a = this->x - other.x;
		T b = this->y - other.y;
		T c = this->z - other.z;

		return Vector2<T>(a, b, c);
	};

	// Scalar Multiplication
	Vector3<T> operator * (T other)
	{
		T a = other * this->x;
		T b = other * this->y;
		T c = other * this->z;

		return Vector3<T>(a, b, c);
	};

	// Magnitude
	T Mag()
	{
		T mag = sqrt((this->x * this->x) + (this->y * this->y) + (this->z * this->z));

		return mag;
	}

	// Normalize Vector
	Vector3<T> Normalize()
	{
		T mag = this->Mag();

		return Vector3<T>((this->x / mag), (this->y / mag), (this->z / mag));
	}

	// Dot Product
	T DotProduct(Vector3<T> other)
	{
		Vector3 normThis = this->Normalize();
		Vector3 normOther = other.Normalize();

		T dotP = (normThis.x * normOther.x) + (normThis.y * normOther.y) + (normThis.z * normOther.z);

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

template<class T>
class Vector4
{
private:
	T x;
	T y;
	T z;
	T w;

public:
	Vector4() {};

	Vector4(T a, T b, T c, T d)
	{
		x = a;
		y = b;
		z = c;
		w = d;
	};

	~Vector4() {};

	bool operator == (Vector4<T> other)
	{
		if (other.x == x && other.y == y && other.z == z && other.w == w)
			return true;

		return false;
	};

	// Addition
	Vector4<T> operator + (Vector4<T> other)
	{
		T a = this->x + other.x;
		T b = this->y + other.y;
		T c = this->z + other.z;
		T d = this->w + other.w;

		return Vector4<T>(a, b, c, d);
	};

	// Subtraction
	Vector4<T> operator - (Vector4<T> other)
	{
		T a = this->x - other.x;
		T b = this->y - other.y;
		T c = this->z - other.z;
		T d = this->w - other.w;

		return Vector2<T>(a, b, c, d);
	};

	// Scalar Multiplication
	Vector4<T> operator * (T other)
	{
		T a = other * this->x;
		T b = other * this->y;
		T c = other * this->z;
		T d = other * this->w;

		return Vector4<T>(a, b, c, d);
	};

	// Magnitude
	T Mag()
	{
		T mag = sqrt((this->x * this->x) + (this->y * this->y) + (this->z * this->z) + (this->w * this->w));

		return mag;
	}

	// Normalize Vector
	Vector4<T> Normalize()
	{
		T mag = this->Mag();

		return Vector4<T>((this->x / mag), (this->y / mag), (this->z / mag), (this->w / mag));
	}

	// Dot Product
	T DotProduct(Vector4<T> other)
	{
		Vector4 normThis = this->Normalize();
		Vector4 normOther = other.Normalize();

		T dotP = (normThis.x * normOther.x) + (normThis.y * normOther.y) + (normThis.z * normOther.z) + (normThis.w * normOther.w);

		return dotP;
	}
};