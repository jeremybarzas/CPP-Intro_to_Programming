#include "MathLibrary.h"

int main()
{
	/*=================== Matrix2D =====================*/

	float Mat2aVec2a[2] = { 1, 2 };
	float Mat2aVec2b[2] = { 3, 4 };
	Matrix2D a = Matrix2D(Mat2aVec2a, Mat2aVec2b);

	float Mat2bVec2a[2] = { 5, 6 };
	float Mat2bVec2b[2] = { 7, 8 };
	Matrix2D b = Matrix2D(Mat2bVec2a, Mat2bVec2b);

	system("pause");
	return 0;
}