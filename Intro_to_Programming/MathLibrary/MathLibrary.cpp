#include "MathLibrary.h"

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
		cin.ignore();
		
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
		}
		system("cls");
		
		switch (input)
		{
		case 1: Vec2DUnitTest(); input = -1; break;

		case 2: Vec3DUnitTest(); input = -1; break;

		case 3: Vec4DUnitTest(); input = -1; break;

		case 4: Mat2DUnitTest(); input = -1; break;

		case 5: Mat3DUnitTest(); input = -1; break;

		case 6: Mat4DUnitTest(); input = -1; break;

		case 0: printf("The program will now close.\n\n"); system("pause"); break;

		default:
			printf("Tha is not a valid choice.\n\n");
			system("pause");
			system("cls");
			break;
		}
	}
}

void Vec2DUnitTest()
{
	cout << "========== Vector 2D Unit Test Start ==========\n\n";

	Vector2D A = Vector2D(1, 2);
	Vector2D B = Vector2D(3, 4);
	
	cout << "Vectors to be used:\nA) == <1, 2>\nB) == <3, 4>\n\n";

	/*========== Addition ==========*/
	cout << "========== Vector 2D Addition ==========\n\n";

	Vector2D Add = A + B;

	cout << "Vector2D Add = A + B;\n\n";

	cout << "Add == " << "<" << Add.getX() << ", " << Add.getY() << ">.\n\n";

	/*========== Subtraction ==========*/
	cout << "========== Vector 2D Subtraction ==========\n\n";

	Vector2D Sub = A - B;

	cout << "Vector2D Sub = A - B;\n\n";

	cout << "Sub == " << "<" << Sub.getX() << ", " << Sub.getY() << ">.\n\n";

	/*========== Multiplication ==========*/
	cout << "========== Vector 2D Multiplication ==========\n\n";

	Vector2D Mult = A * 5;

	cout << "Vector2D Mult = A * 5;\n\n";

	cout << "Mult == " << "<" << Mult.getX() << ", " << Mult.getY() << ">.\n\n";

	/*========== Magnitude ==========*/
	cout << "========== Vector 2D Magnitude ==========\n\n";

	cout << "A.Mag();\nB.Mag();\n\n";

	cout << "Magnitude of A: " << A.Mag() << "\n";
	cout << "Magnitude of B: " << B.Mag() << "\n\n";

	/*========== Normalise ==========*/
	cout << "========== Vector 2D Normalise ==========\n\n";

	cout << "Vector2D normA = A.Normalise();\nVector2D normB = B.Normalise();\n\n";

	Vector2D normA = A.Normalise();
	Vector2D normB = B.Normalise();

	cout << "A normalised: <" << normA.getX() << ", " << normA.getY() << ">\n";
	cout << "B normalised: <" << normB.getX() << ", " << normB.getY() << ">\n\n";

	cout << "========== Vector 2D Dot Product ==========\n\n";

	cout << "float dotP = A.DotProduct(B);\n\n";

	float dotP = A.DotProduct(B);
	
	cout << "Dot product: " << dotP << "\n\n";

	cout << "========== Vector 2D Unit Test End ==========\n\n";
	system("pause");
	system("cls");
}

void Vec3DUnitTest()
{
	cout << "========== Vector 3D Unit Test ==========\n\n";
	Vector3D A = Vector3D(1, 2, 3);
	Vector3D B = Vector3D(4, 5, 6);

	cout << "Vectors to be used:\nA) == <1, 2, 3>\nB) == <4, 5, 6>\n\n";

	/*========== Addition ==========*/
	cout << "========== Vector 3D Addition ==========\n\n";

	Vector3D Add = A + B;

	cout << "Vector3D Add = A + B;\n\n";

	cout << "Add == " << "<" << Add.getX() << ", " << Add.getY() << ", " << Add.getZ() << ">.\n\n";

	/*========== Subtraction ==========*/
	cout << "========== Vector 3D Subtraction ==========\n\n";

	Vector3D Sub = A - B;

	cout << "Vector3D Sub = A - B;\n\n";

	cout << "Sub == " << "<" << Sub.getX() << ", " << Sub.getY() << ", " << Sub.getZ() << ">.\n\n";

	/*========== Multiplication ==========*/
	cout << "========== Vector 3D Multiplication ==========\n\n";

	Vector3D Mult = A * 5;

	cout << "Vector3D Mult = A * 5;\n\n";

	cout << "Mult == " << "<" << Mult.getX() << ", " << Mult.getY() << ", " << Mult.getZ() << ">.\n\n";

	/*========== Magnitude ==========*/
	cout << "========== Vector 3D Magnitude ==========\n\n";

	cout << "A.Mag();\nB.Mag();\n\n";

	cout << "Magnitude of A: " << A.Mag() << "\n";
	cout << "Magnitude of B: " << B.Mag() << "\n\n";

	/*========== Normalise ==========*/
	cout << "========== Vector 3D Normalise ==========\n\n";

	cout << "Vector3D normA = A.Normalise();\nVector3D normB = B.Normalise();\n\n";

	Vector3D normA = A.Normalise();
	Vector3D normB = B.Normalise();

	cout << "A normalised: <" << normA.getX() << ", " << normA.getY() << ", " << normA.getZ() << ">.\n\n";
	cout << "B normalised: <" << normB.getX() << ", " << normB.getY() << ", " << normB.getZ() << ">.\n\n";

	/*========== Dot Product ==========*/
	cout << "========== Vector 3D Dot Product ==========\n\n";

	cout << "float dotP = A.DotProduct(B);\n\n";

	float dotP = A.DotProduct(B);

	cout << "Dot product: " << dotP << "\n\n";

	/*========== Cross Product ==========*/
	cout << "========== Vector 3D Cross Product ==========\n\n";

	cout << "Vector3D::CrossProduct(A, B);" << "\n\n";

	Vector3D Xprod = Vector3D::CrossProduct(A, B);

	cout << "Cross Product: <" << Xprod.getX() << ", " << Xprod.getY() << ", " << Xprod.getZ() << ">.\n\n";

	cout << "========== Vector 3D Unit Test End ==========\n\n";
	system("pause");
	system("cls");
}

void Vec4DUnitTest()
{
	cout << "========== Vector 4D Unit Test ==========\n\n";


	system("pause");
	system("cls");
}

void Mat2DUnitTest()
{
	cout << "========== Matrix 2D Unit Test ==========\n\n";

	float Mat2aVec2a[2] = { 1, 2 };
	float Mat2aVec2b[2] = { 3, 4 };
	Matrix2D a = Matrix2D(Mat2aVec2a, Mat2aVec2b);

	float Mat2bVec2a[2] = { 5, 6 };
	float Mat2bVec2b[2] = { 7, 8 };
	Matrix2D b = Matrix2D(Mat2bVec2a, Mat2bVec2b);

	Matrix2D c = a * b;

	system("pause");
	system("cls");
}

void Mat3DUnitTest()
{
	cout << "========== Matrix 3D Unit Test ==========\n\n";


	system("pause");
	system("cls");
}

void Mat4DUnitTest()
{
	cout << "========== Matrix 4D Unit Test ==========\n\n";


	system("pause");
	system("cls");
}