#include "ReversePolishCalculator.h"

int main()
{
	RPC test = RPC();

	test.AddToStack(1);
	test.AddToStack(2);
	test.AddToStack(3);
	test.AddToStack(4);
	test.AddToStack(5);

	// this line below is not working due to a issue that i did not have time to pin point
	test.AddToStack('+');

	// these test cases will work
	int testAddtion = test.Resolve('+');
	int testSubtraction = test.Resolve('-');
	int testMultiplication = test.Resolve('*');
	int testDivision = test.Resolve('/');
	int testModulus = test.Resolve('%');
	

















	return 0;
}