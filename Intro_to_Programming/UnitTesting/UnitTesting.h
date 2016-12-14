#pragma once
#include <iostream>
#include <cassert>
#include <fstream>

#include "MathLibrary.h"
#include "LinkedList.h"

using std::cin;
using std::cout;
using std::ofstream;

void UnitTest();

void Vec2DUnitTest();
void Vec3DUnitTest();
void Vec4DUnitTest();
void Mat2DUnitTest();
void Mat3DUnitTest();
void Mat4DUnitTest();

void LinkedListUnitTest();

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
		cout << "Linked List Unit Test - - - - - - 7\n";

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

		case 7: LinkedListUnitTest(); input = -1; break;

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
	Vector4D A = Vector4D(1, 2, 3, 4);
	Vector4D B = Vector4D(5, 6, 7, 8);

	cout << "Vectors to be used:\nA) == <1, 2, 3, 4>\nB) == <5, 6, 7, 8>\n\n";

	/*========== Addition ==========*/
	cout << "========== Vector 4D Addition ==========\n\n";

	Vector4D Add = A + B;

	cout << "Vector4D Add = A + B;\n\n";

	cout << "Add == " << "<" << Add.getX() << ", " << Add.getY() << ", " << Add.getZ() << ">.\n\n";

	/*========== Subtraction ==========*/
	cout << "========== Vector 4D Subtraction ==========\n\n";

	Vector4D Sub = A - B;

	cout << "Vector4D Sub = A - B;\n\n";

	cout << "Sub == " << "<" << Sub.getX() << ", " << Sub.getY() << ", " << Sub.getZ() << ">.\n\n";

	/*========== Multiplication ==========*/
	cout << "========== Vector 4D Multiplication ==========\n\n";

	Vector4D Mult = A * 5;

	cout << "Vector4D Mult = A * 5;\n\n";

	cout << "Mult == " << "<" << Mult.getX() << ", " << Mult.getY() << ", " << Mult.getZ() << ">.\n\n";

	/*========== Magnitude ==========*/
	cout << "========== Vector 4D Magnitude ==========\n\n";

	cout << "A.Mag();\nB.Mag();\n\n";

	cout << "Magnitude of A: " << A.Mag() << "\n";
	cout << "Magnitude of B: " << B.Mag() << "\n\n";

	/*========== Normalise ==========*/
	cout << "========== Vector 4D Normalise ==========\n\n";

	cout << "Vector4D normA = A.Normalise();\nVector3D normB = B.Normalise();\n\n";

	Vector4D normA = A.Normalise();
	Vector4D normB = B.Normalise();

	cout << "A normalised: <" << normA.getX() << ", " << normA.getY() << ", " << normA.getZ() << ">.\n\n";
	cout << "B normalised: <" << normB.getX() << ", " << normB.getY() << ", " << normB.getZ() << ">.\n\n";

	/*========== Dot Product ==========*/
	cout << "========== Vector 4D Dot Product ==========\n\n";

	cout << "float dotP = A.DotProduct(B);\n\n";

	float dotP = A.DotProduct(B);

	cout << "Dot product: " << dotP << "\n\n";

	cout << "========== Vector 3D Unit Test End ==========\n\n";
	system("pause");
	system("cls");
}

void Mat2DUnitTest()
{
	cout << "========== Matrix 2D Unit Test Start ==========\n\n";

	float Mat2aVec2a[2] = { 1, 2 };
	float Mat2aVec2b[2] = { 3, 4 };
	Matrix2D A = Matrix2D(Mat2aVec2a, Mat2aVec2b);

	float Mat2bVec2a[2] = { 5, 6 };
	float Mat2bVec2b[2] = { 7, 8 };
	Matrix2D B = Matrix2D(Mat2bVec2a, Mat2bVec2b);
	
	cout << "Matrices to be used:\n\nA): <1, 2>\n    <3, 4>\n\nB): <5, 6>\n    <7, 8>\n\n";

	/*========== Matrix by Matrix Multiplication ==========*/
	cout << "========== Matrix 2D * Operator for Matrix by Matrix ==========\n\n";

	Matrix2D C = A * B;

	cout << "Matrix2D C = A * B;\n\n";

	cout << "C): <19, 22>\n    <43, 50>\n\n";

	cout << "========== Matrix 2D * Operator for Matrix by Vector ==========\n\n";

	Vector2D Vec2a = Vector2D(3, 4);

	Vector2D Vec2b = A * Vec2a;

	cout << "Vector2D Vec2a = Vector2D(3, 4);\n\nVector2D Vec2b = A * Vec2a;\n\n";

	cout << "Vec2b == <12, 24>\n\n";

	cout << "========== Matrix 2D Unit Test End ==========\n\n";

	system("pause");
	system("cls");
}

void Mat3DUnitTest()
{
	cout << "========== Matrix 3D Unit Test Start ==========\n\n";

	float Mat3aVec3a[3] = { 1, 2, 3 };
	float Mat3aVec3b[3] = { 4, 5, 6 };
	float Mat3aVec3c[3] = { 7, 8, 9 };
	Matrix3D A = Matrix3D(Mat3aVec3a, Mat3aVec3b, Mat3aVec3c);

	float Mat3bVec3a[3] = { 10, 11, 12};
	float Mat3bVec3b[3] = { 13, 14, 15 };
	float Mat3bVec3c[3] = { 16, 17, 18 };
	Matrix3D B = Matrix3D(Mat3bVec3a, Mat3bVec3b, Mat3bVec3c);

	cout << "Matrices to be used:\n\nA): <1, 2, 3>\n    <4, 5, 6>\n    <7, 8, 9>\n\nB): <10, 11, 12>\n    <13, 14, 15>\n    <16, 17, 18>\n\n";

	/*========== Matrix by Matrix Multiplication ==========*/
	cout << "========== Matrix 3D * Operator for Matrix by Matrix ==========\n\n";

	Matrix3D C = A * B;

	cout << "Matrix3D C = A * B;\n\n";

	cout << "C): <84, 90, 96>\n    <201, 216, 231>\n    <318, 342, 366>\n\n";

	cout << "========== Matrix 3D * Operator for Matrix by Vector ==========\n\n";

	Vector3D Vec3a = Vector3D(4, 5, 6);

	Vector3D Vec3b = A * Vec3a;

	cout << "Vector3D Vec3a = Vector3D(4, 5, 6);\n\nVector3D Vec3b = A * Vec3a;\n\n";

	cout << "Vec3b == <48, 75, 108>\n\n";

	cout << "========== Matrix 3D Unit Test End ==========\n\n";

	system("pause");
	system("cls");
}

void Mat4DUnitTest()
{
	cout << "========== Matrix 4D Unit Test Start ==========\n\n";

	float Mat4aVec4a[4] = { 1, 2, 3, 4 };
	float Mat4aVec4b[4] = { 5, 6, 7, 8 };
	float Mat4aVec4c[4] = { 9, 10, 11, 12 };
	float Mat4aVec4d[4] = { 13, 14, 15, 16};
	Matrix4D A = Matrix4D(Mat4aVec4a, Mat4aVec4b, Mat4aVec4c, Mat4aVec4d);

	float Mat4bVec4a[4] = { 17, 18, 19, 20 };
	float Mat4bVec4b[4] = { 21, 22, 23, 24 };
	float Mat4bVec4c[4] = { 25, 26, 27, 28 };
	float Mat4bVec4d[4] = { 29, 30, 31, 32 };
	Matrix4D B = Matrix4D(Mat4bVec4a, Mat4bVec4b, Mat4bVec4c, Mat4bVec4d);

	cout << "Matrices to be used:\n\nA): <1, 2, 3, 4>\n    <5, 6, 7, 8>\n    <9, 10, 11, 12>\n    <13, 14, 15, 16>\n\nB): <17, 18, 19, 20>\n    <21, 22, 23, 24>\n    <25, 26, 27, 28>\n    <29, 30, 31, 32>\n\n";

	/*========== Matrix by Matrix Multiplication ==========*/
	cout << "========== Matrix 4D * Operator for Matrix by Matrix ==========\n\n";

	Matrix4D C = A * B;

	cout << "Matrix4D C = A * B;\n\n";

	cout << "C): <250, 260, 270, 296>\n    <850, 884, 918, 1640>\n    <986, 1028, 1070, 1192>\n    <1345, 1412, 1470, 1640>\n\n";

	cout << "========== Matrix 4D * Operator for Matrix by Vector ==========\n\n";

	Vector4D Vec4a = Vector4D(5, 6, 7, 8);

	Vector4D Vec4b = A * Vec4a;

	cout << "Vector4D Vec4a = Vector4D(4, 5, 6);\n\nVector4D Vec4b = A * Vec4a;\n\n";

	cout << "Vec4b == <140, 192, 252, 384>\n\n";

	cout << "========== Matrix 4D Unit Test End ==========\n\n";

	system("pause");
	system("cls");
}

void LinkedListUnitTest()
{
	LinkedList<int> List1 = LinkedList<int>();
	LinkedList<int> List2 = LinkedList<int>();
	LinkedList<int> List3 = LinkedList<int>();
	LinkedList<int> List4 = LinkedList<int>();
	LinkedList<int> List5 = LinkedList<int>();

	for (int i = 0; i < 50; i++)
	{
		if (i < 10)
		{
			List1.insertLast(i);
		}
		else if(i < 20)
		{
			List2.insertLast(i);
		}
		else if (i < 30)
		{
			List3.insertLast(i);
		}
		else if (i < 40)
		{
			List4.insertLast(i);
		}
		else if (i < 50)
		{
			List5.insertLast(i);
		}
	}

	cout << "========== Linked List Unit Test Start ==========\n\n";
	
	cout << "Lists to be used, displayed using list.print() function: \n\n";

	cout << "List 1: ";
	List1.print();

	cout << "List 2: ";
	List2.print();

	cout << "List 3: ";
	List3.print();

	cout << "List 4: ";
	List4.print();

	cout << "List 5: ";
	List5.print();

	/*========== Linked List Iterator ==========*/
	cout << "\n========== Linked List Iterator ==========\n\n";

	cout << "Displayed using a for loop to move the iterator:\n\n";

	LinkedListIterator<int> iterator1 = List1.begin();

	cout << "List 1: ";
	for (int i = 1; i <= List1.length(); i++)
	{
		if (i == List1.length())
		{
			cout << *iterator1;
			++iterator1;
		}
		else
		{
			cout << *iterator1 << ", ";
			++iterator1;
		}
	}

	LinkedListIterator<int> iterator2 = List2.begin();

	cout << "\nList 2: ";
	for (int i = 1; i <= List2.length(); i++)
	{
		if (i == List2.length())
		{
			cout << *iterator2;
			++iterator2;
		}
		else
		{
			cout << *iterator2 << ", ";
			++iterator2;
		}
	}

	LinkedListIterator<int> iterator3 = List3.begin();

	cout << "\nList 3: ";
	for (int i = 1; i <= List3.length(); i++)
	{
		if (i == List3.length())
		{
			cout << *iterator3;
			++iterator3;
		}
		else
		{
			cout << *iterator3 << ", ";
			++iterator3;
		}
	}

	LinkedListIterator<int> iterator4 = List4.begin();

	cout << "\nList 4: ";
	for (int i = 1; i <= List4.length(); i++)
	{
		if (i == List4.length())
		{
			cout << *iterator4;
			++iterator4;
		}
		else
		{
			cout << *iterator4 << ", ";
			++iterator4;
		}
	}

	LinkedListIterator<int> iterator5 = List5.begin();

	cout << "\nList 5: ";
	for (int i = 1; i <= List5.length(); i++)
	{
		if (i == List5.length())
		{
			cout << *iterator5;
			++iterator5;
		}
		else
		{
			cout << *iterator5 << ", ";
			++iterator5;
		}
	}

	/*========== Delete Node ==========*/
	cout << "\n\n========== Delete Node ==========\n\n";

	cout << "Before Delete Node:\n\n";

	cout << "List 1: ";
	List1.print();

	cout << "List 2: ";
	List2.print();

	cout << "List 3: ";
	List3.print();

	cout << "List 4: ";
	List4.print();

	cout << "List 5: ";
	List5.print();

	List1.deleteNode(5);
	List2.deleteNode(13);
	List3.deleteNode(20);
	List4.deleteNode(31);
	List5.deleteNode(49);

	cout << "\nAfter Delete Node:\n\n";

	cout << "List 1: ";
	List1.print();

	cout << "List 2: ";
	List2.print();

	cout << "List 3: ";
	List3.print();

	cout << "List 4: ";
	List4.print();

	cout << "List 5: ";
	List5.print();

	cout << "\n========== Linked List Unit Test End ==========\n\n";

	system("pause");
	system("cls");
}