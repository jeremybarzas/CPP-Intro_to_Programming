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