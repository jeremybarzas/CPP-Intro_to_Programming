#include "StackAssignment.h"

int main()
{
	Stack stack = Stack(10);
	stack.initializeStack();

	char postfixExpression[10] = { '5','1','2', '+', '4', '*' ,'+' ,'3' ,'-', '\0' };
	int i = 0;
	int k = 0;

	int intArray[3];
	int a = 0;
	int b = 0;
	int result = 0;

	while (postfixExpression[i] != '\0')
	{
		a = 0;
		b = 0;
		result = 0;

		stack.Push(postfixExpression[i]);
		
		if (postfixExpression[i] == '0' || postfixExpression[i] == '1' || postfixExpression[i] == '2' || postfixExpression[i] == '3' || postfixExpression[i] == '4' ||
			postfixExpression[i] == '5' || postfixExpression[i] == '6' || postfixExpression[i] == '7' || postfixExpression[i] == '8' || postfixExpression[i] == '9')
		{
			intArray[k] = Conversion2int(postfixExpression, i);
			k++;
		}
		if (postfixExpression[i] == '+')
		{
			//pop 2 apply expression
			b = intArray[k-=1];
			stack.Pop();
			
			a = intArray[k-=1];
			stack.Pop();

			result = a + b;
			intArray[k] = result;

			//push result
			cout << result << " - This is the result, and is going to be pushed on the stack.\n\n";
			stack.Push(Conversion2char(result));

			k++;
			intArray[k] = '\0';
		}
		if (postfixExpression[i] == '*')
		{
			//pop 2 apply expression
			b = intArray[k -= 1];
			stack.Pop();

			a = intArray[k -= 1];
			stack.Pop();

			result = a * b;
			intArray[k] = result;

			//push result
			cout << result << " - This is the result, and is going to be pushed on the stack.\n\n";
			stack.Push(Conversion2char(result));

			k++;
			intArray[k] = '\0';
		}
		if (postfixExpression[i] == '-')
		{
			//pop 2 apply expression
			b = intArray[k -= 1];
			stack.Pop();

			a = intArray[k -= 1];
			stack.Pop();

			result = a - b;
			intArray[k] = result;

			//push result
			cout << result << " - This is the result, and is going to be pushed on the stack.\n\n";
			stack.Push(Conversion2char(result));

			k++;
			intArray[k] = '\0';
		}

		i++;
	}

	system("pause");
	return 0;
}