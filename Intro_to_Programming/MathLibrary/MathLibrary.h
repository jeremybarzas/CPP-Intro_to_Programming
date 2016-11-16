 #pragma once
#include <iostream>
#include <cassert>

using std::cin;
using std::cout;

/*=================== Vector Math =====================*/

class Vector2D
{
private:
	float x;
	float y;

public:
	Vector2D() {};

	Vector2D(float a, float b) 
	{
		x = a;
		y = b;
	};
	
	~Vector2D() {};

	bool operator == (Vector2D other)
	{
		if (other.x == x && other.y == y)
			return true;
		
		return false;
	};

	// Addition
	Vector2D operator + (Vector2D other)
	{
		float a = this->x + other.x;
		float b = this->y + other.y;

		Vector2D tmp = Vector2D(a, b);
		return tmp;
	};

	// Subtraction
	Vector2D operator - (Vector2D other)
	{
		float a = this->x - other.x;
		float b = this->y - other.y;

		Vector2D tmp = Vector2D(a, b);
		return tmp;
	};

	// Scalar Multiplication
	Vector2D operator * (float other)
	{
		float a = other * this->x;
		float b = other * this->y;

		Vector2D tmp = Vector2D(a, b);
		return tmp;
	};

	// Magnitude
	float Mag()
	{
		float mag = sqrt((this->x * this->x) + (this->y * this->y));

		return mag;
	}

	// Normalize Vector
	Vector2D Normalize()
	{
		float mag = this->Mag();
		Vector2D tmp = Vector2D((this->x / mag), (this->y / mag));
		return tmp;
	}

	// Dot Product
	float DotProduct(Vector2D other)
	{
		Vector2D normThis = this->Normalize();
		Vector2D normOther = other.Normalize();

		float dotP = (normThis.x * normOther.x) + (normThis.y * normOther.y);

		return dotP;
	}
};

class Vector3D
{
private:
	float x;
	float y;
	float z;

public:
	Vector3D() {};

	Vector3D(float a, float b, float c)
	{
		x = a;
		y = b;
		z = z;
	};

	~Vector3D() {};

	bool operator == (Vector3D other)
	{
		if (other.x == x && other.y == y && other.z == z)
			return true;

		return false;
	};

	// Addition
	Vector3D operator + (Vector3D other)
	{
		float a = this->x + other.x;
		float b = this->y + other.y;
		float c = this->z + other.z;

		Vector3D tmp = Vector3D(a, b, c);
		return tmp;
	};

	// Subtraction
	Vector3D operator - (Vector3D other)
	{
		float a = this->x - other.x;
		float b = this->y - other.y;
		float c = this->z - other.z;

		Vector3D tmp = Vector3D(a, b, c);
		return tmp;
	};

	// Scalar Multiplication
	Vector3D operator * (float other)
	{
		float a = other * this->x;
		float b = other * this->y;
		float c = other * this->z;

		Vector3D tmp = Vector3D(a, b, c);
		return tmp;
	};

	// Magnitude
	float Mag()
	{
		float mag = sqrt((this->x * this->x) + (this->y * this->y) + (this->z * this->z));

		return mag;
	}

	// Normalize Vector
	Vector3D Normalize()
	{
		float mag = this->Mag();

		Vector3D tmp = Vector3D((this->x / mag), (this->y / mag), (this->z / mag));
		return tmp;
	}

	// Dot Product
	float DotProduct(Vector3D other)
	{
		Vector3D normThis = this->Normalize();
		Vector3D normOther = other.Normalize();

		float dotP = (normThis.x * normOther.x) + (normThis.y * normOther.y) + (normThis.z * normOther.z);

		return dotP;
	}

	static Vector3D CrossProduct(Vector3D a, Vector3D b)
	{
		// 1 x 2 = ((1y * 2z - 1z * 2y), (1z * 2x - 1x * 2z), (1x * 2y - 1y * 2x))
		float ex = ((a.y * b.z) - (a.z * b.y));
		float why = (a.z * b.x) - (a.x * b.z);
		float zee = ((a.x * b.y) - (a.y * b.x));

		Vector3D tmp = Vector3D(ex, why, zee);
		return tmp;
	}
};

class Vector4D
{
private:
	float x;
	float y;
	float z;
	float w;

public:
	Vector4D() {};

	Vector4D(float a, float b, float c, float d)
	{
		x = a;
		y = b;
		z = z;
		w = d;
	};

	~Vector4D() {};

	bool operator == (Vector4D other)
	{
		if (other.x == x && other.y == y && other.z == z && other.w == w)
			return true;

		return false;
	};

	// Addition
	Vector4D operator + (Vector4D other)
	{
		float a = this->x + other.x;
		float b = this->y + other.y;
		float c = this->z + other.z;
		float d = this->w + other.w;

		Vector4D tmp = Vector4D(a, b, c, d);
		return tmp;
	};

	// Subtraction
	Vector4D operator - (Vector4D other)
	{
		float a = this->x - other.x;
		float b = this->y - other.y;
		float c = this->z - other.z;
		float d = this->w - other.w;

		Vector4D tmp = Vector4D(a, b, c, d);
		return tmp;
	};

	// Scalar Multiplication
	Vector4D operator * (float other)
	{
		float a = other * this->x;
		float b = other * this->y;
		float c = other * this->z;
		float d = other * this->w;

		Vector4D tmp = Vector4D(a, b, c, d);
		return tmp;
	};

	// Magnitude
	float Mag()
	{
		float mag = sqrt((this->x * this->x) + (this->y * this->y) + (this->z * this->z) + (this->w * this->w));

		return mag;
	}

	// Normalize Vector
	Vector4D Normalize()
	{
		float mag = this->Mag();

		Vector4D tmp = Vector4D((this->x / mag), (this->y / mag), (this->z / mag), (this->w / mag));
		return tmp;
	}

	// Dot Product
	float DotProduct(Vector4D other)
	{
		Vector4D normThis = this->Normalize();
		Vector4D normOther = other.Normalize();

		float dotP = (normThis.x * normOther.x) + (normThis.y * normOther.y) + (normThis.z * normOther.z) + (normThis.w * normOther.w);

		return dotP;
	}
};

/*=================== Matrix Math =====================*/

class Matrix2D
{

	float m_vec2a[2];
	float m_vec2b[2];

public:

	// default constructor
	Matrix2D() 
	{
		m_vec2a[0] = 0;
		m_vec2a[1] = 0;
		m_vec2b[0] = 0;
		m_vec2b[1] = 0;
	}

	// deconstructor
	~Matrix2D() {}

	// constructor that takes in raw float values
	Matrix2D(float a1, float a2, float b1, float b2) 
	{
		m_vec2a[0] = a1;
		m_vec2a[1] = a2;

		m_vec2b[0] = b1;
		m_vec2b[1] = b2;
	}

	// constructor that takes in arrays of floats
	Matrix2D(float a[], float b[])
	{
		m_vec2a[0] = a[0];
		m_vec2a[1] = a[1];

		m_vec2b[0] = b[0];
		m_vec2b[1] = b[1];
	}

	// multiplying two Matrix2ds
	Matrix2D multiply(Matrix2D other)
	{
		float a1 = (this->m_vec2a[0] * other.m_vec2a[0]) + (this->m_vec2a[1] * other.m_vec2b[0]);
		float a2 = (this->m_vec2a[0] * other.m_vec2a[1]) + (this->m_vec2a[1] * other.m_vec2b[1]);

		float b1 = (this->m_vec2b[0] * other.m_vec2a[0]) + (this->m_vec2b[1] * other.m_vec2b[0]);
		float b2 = (this->m_vec2b[0] * other.m_vec2a[1]) + (this->m_vec2b[1] * other.m_vec2b[1]);

		Matrix2D mult = Matrix2D(a1, a2, b1, b2);

		return mult;
	}
	 
};

class Matrix3D
{
private:
	float m_vec3a[3];
	float m_vec3b[3];
	float m_vec3c[3];

public:

	// default constructor
	Matrix3D()
	{
		m_vec3a[0] = 0;
		m_vec3a[1] = 0;
		m_vec3a[2] = 0;

		m_vec3b[0] = 0;
		m_vec3b[1] = 0;
		m_vec3b[2] = 0;

		m_vec3c[0] = 0;
		m_vec3c[1] = 0;
		m_vec3c[2] = 0;
	}

	// deconstructor
	~Matrix3D() {}

	// constructor that takes in raw float values
	Matrix3D(float a1, float a2, float a3, float b1, float b2, float b3, float c1, float c2, float c3)
	{
		m_vec3a[0] = a1;
		m_vec3a[1] = a2;
		m_vec3a[2] = a3;

		m_vec3b[0] = b1;
		m_vec3b[1] = b2;
		m_vec3b[2] = b3;

		m_vec3c[0] = b1;
		m_vec3c[1] = b2;
		m_vec3c[2] = b3;
	}

	// constructor that takes in arrays of floats
	Matrix3D(float a[], float b[], float c[])
	{
		m_vec3a[0] = a[0];
		m_vec3a[1] = a[1];
		m_vec3a[2] = a[2];

		m_vec3b[0] = b[0];
		m_vec3b[1] = b[1];
		m_vec3b[2] = b[2];

		m_vec3c[0] = c[0];
		m_vec3c[1] = c[1];
		m_vec3c[2] = c[2];
	}

	// multiplying two Matrix3Ds
	Matrix3D multiply(Matrix3D other)
	{
		float a[3];
		a[0] = (this->m_vec3a[0] * other.m_vec3a[0]) + (this->m_vec3a[1] * other.m_vec3b[0]) + (this->m_vec3a[2] * other.m_vec3c[0]);
		a[1] = (this->m_vec3a[0] * other.m_vec3a[1]) + (this->m_vec3a[1] * other.m_vec3b[1]) + (this->m_vec3a[2] * other.m_vec3c[1]);
		a[2] = (this->m_vec3a[0] * other.m_vec3a[2]) + (this->m_vec3a[1] * other.m_vec3b[2]) + (this->m_vec3a[2] * other.m_vec3c[2]);

		float b[3];
		b[0] = (this->m_vec3b[0] * other.m_vec3a[0]) + (this->m_vec3b[1] * other.m_vec3b[0]) + (this->m_vec3b[2] * other.m_vec3c[0]);
		b[1] = (this->m_vec3b[0] * other.m_vec3a[1]) + (this->m_vec3b[1] * other.m_vec3b[1]) + (this->m_vec3b[2] * other.m_vec3c[1]);
		b[2] = (this->m_vec3b[0] * other.m_vec3a[2]) + (this->m_vec3b[1] * other.m_vec3b[2]) + (this->m_vec3b[2] * other.m_vec3c[2]);

		float c[3];
		c[0] = (this->m_vec3c[0] * other.m_vec3a[0]) + (this->m_vec3c[1] * other.m_vec3b[0]) + (this->m_vec3c[2] * other.m_vec3c[0]);
		c[1] = (this->m_vec3c[0] * other.m_vec3a[1]) + (this->m_vec3c[1] * other.m_vec3b[1]) + (this->m_vec3c[2] * other.m_vec3c[1]);
		c[2] = (this->m_vec3c[0] * other.m_vec3a[2]) + (this->m_vec3c[1] * other.m_vec3b[2]) + (this->m_vec3c[2] * other.m_vec3c[2]);

		Matrix3D mult = Matrix3D(a, b, c);

		return mult;
	}

};

class Matrix4D
{
private:
	float m_vec4a[4];
	float m_vec4b[4];
	float m_vec4c[4];
	float m_vec4d[4];

public:

	// default constructor
	Matrix4D()
	{
		m_vec4a[0] = 0;
		m_vec4a[1] = 0;
		m_vec4a[2] = 0;
		m_vec4a[3] = 0;

		m_vec4b[0] = 0;
		m_vec4b[1] = 0;
		m_vec4b[2] = 0;
		m_vec4b[3] = 0;

		m_vec4c[0] = 0;
		m_vec4c[1] = 0;
		m_vec4c[2] = 0;
		m_vec4c[3] = 0;

		m_vec4d[0] = 0;
		m_vec4d[1] = 0;
		m_vec4d[2] = 0;
		m_vec4d[3] = 0;
	}

	// deconstructor
	~Matrix4D() {}

	// constructor that takes in raw float values
	Matrix4D(float a1, float a2, float a3, float a4, float b1, float b2, float b3, float b4, float c1, float c2, float c3, float c4, float d1, float d2, float d3, float d4)
	{
		m_vec4a[0] = a1;
		m_vec4a[1] = a2;
		m_vec4a[2] = a3;
		m_vec4a[3] = a4;

		m_vec4b[0] = b1;
		m_vec4b[1] = b2;
		m_vec4b[2] = b3;
		m_vec4b[3] = b4;

		m_vec4c[0] = c1;
		m_vec4c[1] = c2;
		m_vec4c[2] = c3;
		m_vec4c[3] = c4;

		m_vec4d[0] = d1;
		m_vec4d[1] = d2;
		m_vec4d[2] = d3;
		m_vec4d[3] = d4;
	}

	// constructor that takes in arrays of floats
	Matrix4D(float a[], float b[], float c[], float d[])
	{
		m_vec4a[0] = a[0];
		m_vec4a[1] = a[1];
		m_vec4a[2] = a[2];
		m_vec4a[3] = a[3];

		m_vec4b[0] = b[0];
		m_vec4b[1] = b[1];
		m_vec4b[2] = b[2];
		m_vec4b[3] = d[3];

		m_vec4c[0] = c[0];
		m_vec4c[1] = c[1];
		m_vec4c[2] = c[2];
		m_vec4c[3] = c[3];

		m_vec4d[0] = d[0];
		m_vec4d[1] = d[1];
		m_vec4d[2] = d[2];
		m_vec4d[3] = d[3];
	}

	// multiplying two Matrix3Ds
	Matrix4D multiply(Matrix4D other)
	{
		float a[4];
		a[0] = (this->m_vec4a[0] * other.m_vec4a[0]) + (this->m_vec4a[1] * other.m_vec4b[0]) + (this->m_vec4a[2] * other.m_vec4c[0]) + (this->m_vec4a[3] * other.m_vec4c[0]);
		a[1] = (this->m_vec4a[0] * other.m_vec4a[1]) + (this->m_vec4a[1] * other.m_vec4b[1]) + (this->m_vec4a[2] * other.m_vec4c[1]) + (this->m_vec4a[3] * other.m_vec4c[1]);
		a[2] = (this->m_vec4a[0] * other.m_vec4a[2]) + (this->m_vec4a[1] * other.m_vec4b[2]) + (this->m_vec4a[2] * other.m_vec4c[2]) + (this->m_vec4a[3] * other.m_vec4c[2]);
		a[2] = (this->m_vec4a[0] * other.m_vec4a[3]) + (this->m_vec4a[1] * other.m_vec4b[3]) + (this->m_vec4a[2] * other.m_vec4c[3]) + (this->m_vec4a[3] * other.m_vec4c[3]);

		float b[4];
		a[0] = (this->m_vec4b[0] * other.m_vec4a[0]) + (this->m_vec4b[1] * other.m_vec4b[0]) + (this->m_vec4b[2] * other.m_vec4c[0]) + (this->m_vec4b[3] * other.m_vec4c[0]);
		a[1] = (this->m_vec4b[0] * other.m_vec4a[1]) + (this->m_vec4b[1] * other.m_vec4b[1]) + (this->m_vec4b[2] * other.m_vec4c[1]) + (this->m_vec4b[3] * other.m_vec4c[1]);
		a[2] = (this->m_vec4b[0] * other.m_vec4a[2]) + (this->m_vec4b[1] * other.m_vec4b[2]) + (this->m_vec4b[2] * other.m_vec4c[2]) + (this->m_vec4b[3] * other.m_vec4c[2]);
		a[2] = (this->m_vec4b[0] * other.m_vec4a[3]) + (this->m_vec4b[1] * other.m_vec4b[3]) + (this->m_vec4b[2] * other.m_vec4c[3]) + (this->m_vec4b[3] * other.m_vec4c[3]);
		float c[4];
		a[0] = (this->m_vec4c[0] * other.m_vec4a[0]) + (this->m_vec4c[1] * other.m_vec4b[0]) + (this->m_vec4c[2] * other.m_vec4c[0]) + (this->m_vec4c[3] * other.m_vec4c[0]);
		a[1] = (this->m_vec4c[0] * other.m_vec4a[1]) + (this->m_vec4c[1] * other.m_vec4b[1]) + (this->m_vec4c[2] * other.m_vec4c[1]) + (this->m_vec4c[3] * other.m_vec4c[1]);
		a[2] = (this->m_vec4c[0] * other.m_vec4a[2]) + (this->m_vec4c[1] * other.m_vec4b[2]) + (this->m_vec4c[2] * other.m_vec4c[2]) + (this->m_vec4c[3] * other.m_vec4c[2]);
		a[2] = (this->m_vec4c[0] * other.m_vec4a[3]) + (this->m_vec4c[1] * other.m_vec4b[3]) + (this->m_vec4c[2] * other.m_vec4c[3]) + (this->m_vec4c[3] * other.m_vec4c[3]);

		float d[4];
		a[0] = (this->m_vec4d[0] * other.m_vec4a[0]) + (this->m_vec4d[1] * other.m_vec4b[0]) + (this->m_vec4d[2] * other.m_vec4c[0]) + (this->m_vec4d[3] * other.m_vec4c[0]);
		a[1] = (this->m_vec4d[0] * other.m_vec4a[1]) + (this->m_vec4d[1] * other.m_vec4b[1]) + (this->m_vec4d[2] * other.m_vec4c[1]) + (this->m_vec4d[3] * other.m_vec4c[1]);
		a[2] = (this->m_vec4d[0] * other.m_vec4a[2]) + (this->m_vec4d[1] * other.m_vec4b[2]) + (this->m_vec4d[2] * other.m_vec4c[2]) + (this->m_vec4d[3] * other.m_vec4c[2]);
		a[2] = (this->m_vec4d[0] * other.m_vec4a[3]) + (this->m_vec4d[1] * other.m_vec4b[3]) + (this->m_vec4d[2] * other.m_vec4c[3]) + (this->m_vec4d[3] * other.m_vec4c[3]);
		
		Matrix4D mult = Matrix4D(a, b, c, d);

		return mult;
	}

};

/*=================== Unit Testing =====================*/

void Vec2DUnitTest()
{
	
}

void Mat2DUnitTest()
{
	cout << "========== Matrix 2D Unit Test. ==========\n";

	float Mat2aVec2a[2] = { 1, 2 };
	float Mat2aVec2b[2] = { 3, 4 };
	Matrix2D a = Matrix2D(Mat2aVec2a, Mat2aVec2b);

	float Mat2bVec2a[2] = { 5, 6 };
	float Mat2bVec2b[2] = { 7, 8 };
	Matrix2D b = Matrix2D(Mat2bVec2a, Mat2bVec2b);

	Matrix2D c = a.multiply(b);

	printf("\n");
	system("pause");
}

void UnitTest()
{
	int input = -1;

	while (input != 0)
	{
		cout << "Vector 2D Unit Test - - - - - - - 1\n";
		cout << "Vector 3D Unit Test - - - - - - - 2\n";
		cout << "Vector 4D Unit Test - - - - - - - 3\n";
		cout << "Matrix 2D Unit Test - - - - - - - 4\n";
		cout << "Matrix 3D Unit Test - - - - - - - 5\n";
		cout << "Matrix 4D Unit Test - - - - - - - 6\n";

		cout << "\nEnter 0 to quit the program.\n\n";

		cout << "Enter the number of the unit test to display: ";
		cin >> input;
		printf("\n");

		switch (input)
		{
		case 1: 

		case 2:

		case 3:

		case 4: Mat2DUnitTest();

		case 5:

		case 6:

		default:
			break;
		}
	}
}