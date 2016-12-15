#pragma once
#include <iostream>

using std::cout;

/*=================== Vector Math =====================*/

class Vector2D
{
private:
	float x;
	float y;

public:
	Vector2D();

	Vector2D(float a, float b);
	
	~Vector2D();

	float getX();

	float getY();

	void setX(float);

	void setY(float);

	bool operator == (Vector2D other);

	// Addition
	Vector2D operator + (Vector2D other);

	// Subtraction
	Vector2D operator - (Vector2D other);

	// Scalar Multiplication
	Vector2D operator * (float other);

	// Magnitude
	float Mag();

	// Normalize Vector
	Vector2D Normalise();

	// Dot Product
	float DotProduct(Vector2D other);
};

class Vector3D
{
private:
	float x;
	float y;
	float z;

public:
	Vector3D();

	Vector3D(float a, float b, float c);

	~Vector3D();

	float getX();

	float getY();

	float getZ();

	void setX(float x);

	void setY(float y);

	void setZ(float z);

	bool operator == (Vector3D other);

	// Addition
	Vector3D operator + (Vector3D other);

	// Subtraction
	Vector3D operator - (Vector3D other);

	// Scalar Multiplication
	Vector3D operator * (float other);

	// Magnitude
	float Mag();

	// Normalize Vector
	Vector3D Normalise();

	// Dot Product
	float DotProduct(Vector3D other);

	// Cross Product
	Vector3D CrossProduct(Vector3D a, Vector3D b);
};

class Vector4D
{
private:
	float x;
	float y;
	float z;
	float w;

public:
	Vector4D();

	Vector4D(float a, float b, float c, float d);

	~Vector4D();

	float getX();

	float getY();

	float getZ();

	float getW();

	void Vector4D::setX(float x);

	void Vector4D::setY(float y);

	void Vector4D::setZ(float z);

	void Vector4D::setW(float w);

	bool operator == (Vector4D other);

	// Addition
	Vector4D operator + (Vector4D other);
	// Subtraction
	Vector4D operator - (Vector4D other);

	// Scalar Multiplication
	Vector4D operator * (float other);

	// Magnitude
	float Mag();

	// Normalize Vector
	Vector4D Normalise();

	// Dot Product
	float DotProduct(Vector4D other);
};

/*=================== Matrix Math =====================*/

class Matrix2D
{
private:
	float m_vec2a[2];
	float m_vec2b[2];

public:
	// default constructor
	Matrix2D();

	// deconstructor
	~Matrix2D();

	// constructor that takes in raw float values
	Matrix2D(float a1, float a2, float b1, float b2);

	// constructor that takes in arrays of floats
	Matrix2D(float a[], float b[]);

	// multiplying two Matrix2ds
	Matrix2D operator * (Matrix2D other);

	Vector2D operator * (Vector2D other);
};

class Matrix3D
{
private:
	float m_vec3a[3];
	float m_vec3b[3];
	float m_vec3c[3];

public:
	// default constructor
	Matrix3D();

	// deconstructor
	~Matrix3D();

	// constructor that takes in raw float values
	Matrix3D(float a1, float a2, float a3, float b1, float b2, float b3, float c1, float c2, float c3);

	// constructor that takes in arrays of floats
	Matrix3D(float a[], float b[], float c[]);

	// multiplying two Matrix3Ds
	Matrix3D operator * (Matrix3D other);

	Vector3D operator * (Vector3D other);

	Matrix3D SetRotateX(float valueX);

	Matrix3D SetRotateY(float valueY);

	Matrix3D SetRotateZ(float valueZ);
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
	Matrix4D();

	// deconstructor
	~Matrix4D();

	// constructor that takes in raw float values
	Matrix4D(float a1, float a2, float a3, float a4, float b1, float b2, float b3, float b4, float c1, float c2, float c3, float c4, float d1, float d2, float d3, float d4);

	// constructor that takes in arrays of floats
	Matrix4D(float a[], float b[], float c[], float d[]);

	// multiplying two Matrix3Ds
	Matrix4D operator * (Matrix4D other);

	Vector4D operator * (Vector4D other);

	Matrix4D SetRotateX(float valueX);

	Matrix4D SetRotateY(float valueY);

	Matrix4D SetRotateZ(float valueZ);
};