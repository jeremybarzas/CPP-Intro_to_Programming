#include "MathLibrary.h"

/*=================== Vector2D =====================*/

Vector2D::Vector2D() {};

Vector2D::Vector2D(float a, float b)
{
	x = a;
	y = b;
};

Vector2D::~Vector2D() {};

float Vector2D::getX()
{
	return x;
};

float Vector2D::getY()
{
	return y;
};

bool Vector2D::operator == (Vector2D other)
{
	if (other.x == x && other.y == y)
		return true;

	return false;
};

// Addition
Vector2D Vector2D::operator + (Vector2D other)
{
	float a = this->x + other.x;
	float b = this->y + other.y;

	Vector2D tmp = Vector2D(a, b);
	return tmp;
};

// Subtraction
Vector2D Vector2D::operator - (Vector2D other)
{
	float a = this->x - other.x;
	float b = this->y - other.y;

	Vector2D tmp = Vector2D(a, b);
	return tmp;
};

// Scalar Multiplication
Vector2D Vector2D::operator * (float other)
{
	float a = other * this->x;
	float b = other * this->y;

	Vector2D tmp = Vector2D(a, b);
	return tmp;
};

// Magnitude
float Vector2D::Mag()
{
	float mag = sqrt((this->x * this->x) + (this->y * this->y));

	return mag;
};

// Normalize Vector
Vector2D Vector2D::Normalise()
{
	float mag = this->Mag();
	Vector2D tmp = Vector2D((this->x / mag), (this->y / mag));
	return tmp;
};

// Dot Product
float Vector2D::DotProduct(Vector2D other)
{
	Vector2D normThis = this->Normalise();
	Vector2D normOther = other.Normalise();

	float dotP = (normThis.x * normOther.x) + (normThis.y * normOther.y);

	return dotP;
};

/*=================== Vector3D =====================*/

Vector3D::Vector3D() {};

Vector3D::Vector3D(float a, float b, float c)
{
	x = a;
	y = b;
	z = c;
};

Vector3D::~Vector3D() {};

float Vector3D::getX()
{
	return x;
}

float Vector3D::getY()
{
	return y;
}

float Vector3D::getZ()
{
	return z;
}

bool Vector3D::operator == (Vector3D other)
{
	if (other.x == x && other.y == y && other.z == z)
		return true;

	return false;
};

// Addition
Vector3D Vector3D::operator + (Vector3D other)
{
	float a = this->x + other.x;
	float b = this->y + other.y;
	float c = this->z + other.z;

	Vector3D tmp = Vector3D(a, b, c);
	return tmp;
};

// Subtraction
Vector3D Vector3D::operator - (Vector3D other)
{
	float a = this->x - other.x;
	float b = this->y - other.y;
	float c = this->z - other.z;

	Vector3D tmp = Vector3D(a, b, c);
	return tmp;
};

// Scalar Multiplication
Vector3D Vector3D::operator * (float other)
{
	float a = other * this->x;
	float b = other * this->y;
	float c = other * this->z;

	Vector3D tmp = Vector3D(a, b, c);
	return tmp;
};

// Magnitude
float Vector3D::Mag()
{
	float mag = sqrt((this->x * this->x) + (this->y * this->y) + (this->z * this->z));

	return mag;
}

// Normalize Vector
Vector3D Vector3D::Normalise()
{
	float mag = this->Mag();

	Vector3D tmp = Vector3D((this->x / mag), (this->y / mag), (this->z / mag));
	return tmp;
}

// Dot Product
float Vector3D::DotProduct(Vector3D other)
{
	Vector3D normThis = this->Normalise();
	Vector3D normOther = other.Normalise();

	float dotP = (normThis.x * normOther.x) + (normThis.y * normOther.y) + (normThis.z * normOther.z);

	return dotP;
}

// Cross Product
Vector3D Vector3D::CrossProduct(Vector3D a, Vector3D b)
{
	// 1 x 2 = ((1y * 2z - 1z * 2y), (1z * 2x - 1x * 2z), (1x * 2y - 1y * 2x))
	float ex = ((a.y * b.z) - (a.z * b.y));
	float why = (a.z * b.x) - (a.x * b.z);
	float zee = ((a.x * b.y) - (a.y * b.x));

	Vector3D tmp = Vector3D(ex, why, zee);
	return tmp;
}

/*=================== Vector4D =====================*/

Vector4D::Vector4D() {};

Vector4D::Vector4D(float a, float b, float c, float d)
{
	x = a;
	y = b;
	z = c;
	w = d;
};

Vector4D::~Vector4D() {};

float Vector4D::getX()
{
	return x;
}

float Vector4D::getY()
{
	return y;
}

float Vector4D::getZ()
{
	return z;
}

float Vector4D::getW()
{
	return w;
}

bool Vector4D::operator == (Vector4D other)
{
	if (other.x == x && other.y == y && other.z == z && other.w == w)
		return true;

	return false;
};

// Addition
Vector4D Vector4D::operator + (Vector4D other)
{
	float a = this->x + other.x;
	float b = this->y + other.y;
	float c = this->z + other.z;
	float d = this->w + other.w;

	Vector4D tmp = Vector4D(a, b, c, d);
	return tmp;
};

// Subtraction
Vector4D Vector4D::operator - (Vector4D other)
{
	float a = this->x - other.x;
	float b = this->y - other.y;
	float c = this->z - other.z;
	float d = this->w - other.w;

	Vector4D tmp = Vector4D(a, b, c, d);
	return tmp;
};

// Scalar Multiplication
Vector4D Vector4D::operator * (float other)
{
	float a = other * this->x;
	float b = other * this->y;
	float c = other * this->z;
	float d = other * this->w;

	Vector4D tmp = Vector4D(a, b, c, d);
	return tmp;
};

// Magnitude
float Vector4D::Mag()
{
	float mag = sqrt((this->x * this->x) + (this->y * this->y) + (this->z * this->z) + (this->w * this->w));

	return mag;
}

// Normalize Vector
Vector4D Vector4D::Normalise()
{
	float mag = this->Mag();

	Vector4D tmp = Vector4D((this->x / mag), (this->y / mag), (this->z / mag), (this->w / mag));
	return tmp;
}

// Dot Product
float Vector4D::DotProduct(Vector4D other)
{
	Vector4D normThis = this->Normalise();
	Vector4D normOther = other.Normalise();

	float dotP = (normThis.x * normOther.x) + (normThis.y * normOther.y) + (normThis.z * normOther.z) + (normThis.w * normOther.w);

	return dotP;
}

/*=================== Matrix2D =====================*/

// default constructor
Matrix2D::Matrix2D()
{
	m_vec2a[0] = 0;
	m_vec2a[1] = 0;
	m_vec2b[0] = 0;
	m_vec2b[1] = 0;
}

// deconstructor
Matrix2D::~Matrix2D() {}

// constructor that takes in raw float values
Matrix2D::Matrix2D(float a1, float a2, float b1, float b2)
{
	m_vec2a[0] = a1;
	m_vec2a[1] = a2;

	m_vec2b[0] = b1;
	m_vec2b[1] = b2;
}

// constructor that takes in arrays of floats
Matrix2D::Matrix2D(float a[], float b[])
{
	m_vec2a[0] = a[0];
	m_vec2a[1] = a[1];

	m_vec2b[0] = b[0];
	m_vec2b[1] = b[1];
}

// multiplying two Matrix2ds
Matrix2D Matrix2D::operator * (Matrix2D other)
{
	float a1 = (this->m_vec2a[0] * other.m_vec2a[0]) + (this->m_vec2a[1] * other.m_vec2b[0]);
	float a2 = (this->m_vec2a[0] * other.m_vec2a[1]) + (this->m_vec2a[1] * other.m_vec2b[1]);

	float b1 = (this->m_vec2b[0] * other.m_vec2a[0]) + (this->m_vec2b[1] * other.m_vec2b[0]);
	float b2 = (this->m_vec2b[0] * other.m_vec2a[1]) + (this->m_vec2b[1] * other.m_vec2b[1]);

	Matrix2D mult = Matrix2D(a1, a2, b1, b2);

	return mult;
}

Vector2D Matrix2D::operator * (Vector2D other)
{
	float x = other.getX() * this->m_vec2a[0] + other.getX() * this->m_vec2b[0];
	float y = other.getY() * this->m_vec2a[1] + other.getY() * this->m_vec2b[1];

	Vector2D tmp = Vector2D(x, y);

	return tmp;
}

/*=================== Matrix3D =====================*/

// default constructor
Matrix3D::Matrix3D()
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
Matrix3D::~Matrix3D() {}

// constructor that takes in raw float values
Matrix3D::Matrix3D(float a1, float a2, float a3, float b1, float b2, float b3, float c1, float c2, float c3)
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
Matrix3D::Matrix3D(float a[], float b[], float c[])
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
Matrix3D Matrix3D::operator * (Matrix3D other)
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

Vector3D Matrix3D::operator * (Vector3D other)
{
	float x = other.getX() * this->m_vec3a[0] + other.getX() * this->m_vec3b[0] + other.getX() * this->m_vec3c[0];
	float y = other.getY() * this->m_vec3a[1] + other.getY() * this->m_vec3b[1] + other.getY() * this->m_vec3c[1];
	float z = other.getZ() * this->m_vec3a[2] + other.getZ() * this->m_vec3b[2] + other.getZ() * this->m_vec3c[2];

	Vector3D tmp = Vector3D(x, y, z);

	return tmp;
}

Matrix3D Matrix3D::SetRotateX(float valueX)
{
	Matrix3D rotationalX = Matrix3D(1, 0, 0, 0, cos(valueX), -sin(valueX), 0, sin(valueX), cos(valueX));

	*this = *this * rotationalX;

	return *this;
}

Matrix3D Matrix3D::SetRotateY(float valueY)
{
	Matrix3D rotationalY = Matrix3D(cos(valueY), 0, sin(valueY), 0, 1, 0, -sin(valueY), 0, cos(valueY));

	*this = *this * rotationalY;

	return *this;
}

Matrix3D Matrix3D::SetRotateZ(float valueZ)
{
	Matrix3D rotationalZ = Matrix3D(cos(valueZ), -sin(valueZ), 0, sin(valueZ), cos(valueZ), 0, 0, 0, 1);

	*this = *this * rotationalZ;

	return *this;
}

/*=================== Matrix4D =====================*/

// default constructor
Matrix4D::Matrix4D()
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
Matrix4D::~Matrix4D() {}

// constructor that takes in raw float values
Matrix4D::Matrix4D(float a1, float a2, float a3, float a4, float b1, float b2, float b3, float b4, float c1, float c2, float c3, float c4, float d1, float d2, float d3, float d4)
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
Matrix4D::Matrix4D(float a[], float b[], float c[], float d[])
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
Matrix4D Matrix4D::operator * (Matrix4D other)
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

Vector4D Matrix4D::operator * (Vector4D other)
{
	float x = other.getX() * this->m_vec4a[0] + other.getX() * this->m_vec4b[0] + other.getX() * this->m_vec4c[0] + other.getX() * this->m_vec4d[0];
	float y = other.getY() * this->m_vec4a[1] + other.getY() * this->m_vec4b[1] + other.getY() * this->m_vec4c[1] + other.getY() * this->m_vec4d[1];
	float z = other.getZ() * this->m_vec4a[2] + other.getZ() * this->m_vec4b[2] + other.getZ() * this->m_vec4c[2] + other.getZ() * this->m_vec4d[2];
	float w = other.getW() * this->m_vec4a[3] + other.getW() * this->m_vec4b[3] + other.getW() * this->m_vec4c[3] + other.getW() * this->m_vec4d[3];

	Vector4D tmp = Vector4D(x, y, z, w);

	return tmp;
}

Matrix4D Matrix4D::SetRotateX(float valueX)
{
	Matrix4D rotationalX = Matrix4D(1, 0, 0, 0, 0, cos(valueX), -sin(valueX), 0, 0, sin(valueX), cos(valueX), 0, 0, 0, 0, 1);

	*this = *this * rotationalX;

	return *this;
}

Matrix4D Matrix4D::SetRotateY(float valueY)
{
	Matrix4D rotationalY = Matrix4D(cos(valueY), 0, sin(valueY), 0, 0, 1, 0, 0, -sin(valueY), 0, cos(valueY), 0, 0, 0, 0, 1);

	*this = *this * rotationalY;

	return *this;
}

Matrix4D Matrix4D::SetRotateZ(float valueZ)
{
	Matrix4D rotationalZ = Matrix4D(cos(valueZ), -sin(valueZ), 0, 0, sin(valueZ), cos(valueZ), 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);

	*this = *this * rotationalZ;

	return *this;
}