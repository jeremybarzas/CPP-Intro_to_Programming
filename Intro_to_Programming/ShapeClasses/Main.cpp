#include "ShapeClasses.h"

int main()
{
	// Shape Test Start
	cout << "========================= Shape Test Start =========================\n\n";

	BaseShape * shapePtr;
	
	// Point
	cout << "\n\n=============== Point Test ===============\n\n";
	
	shapePtr = new Point(2, 2);

	shapePtr->DebugPrint();

	delete shapePtr;

	// Line
	cout << "\n\n=============== Line Test ===============\n\n";

	shapePtr = new Line(1, 2, 4, 3);

	shapePtr->DebugPrint();

	// Rectangle
	cout << "\n\n=============== Rectangle Test ===============\n\n";

	shapePtr = new Rectangle(4, 2, 1, 1);

	shapePtr->DebugPrint();

	delete shapePtr;

	// Triangle
	cout << "\n\n=============== Triangle Test ===============\n\n";

	shapePtr = new Triangle(2, 3, 1, 1);

	shapePtr->DebugPrint();

	delete shapePtr;

	// Circle
	cout << "\n\n=============== Circle Test ===============\n\n";

	shapePtr = new Circle(3, 2, 2);

	shapePtr->DebugPrint();

	delete shapePtr;

	// Shape Test End
	cout << "\n\n========================= Shape Test End =========================\n\n";

	system("pause");

	return 0;
}