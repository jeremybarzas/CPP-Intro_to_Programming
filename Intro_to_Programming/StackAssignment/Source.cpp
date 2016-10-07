#include "StackAssignment.h"


int main()
{
	/*Stack stack = Stack(1);
	stack.initializeStack();

	const char a = '1';
	const char b = '2';
	const char c = '3';

	const char h = '4';
	const char i = '5';
	const char j = '6';

	stack.push(a);
	stack.push(b);
	stack.push(c);

	stack.push(h);
	stack.push(i);
	stack.push(j);*/

	Stack stack = Stack(25);
	Stack resolve = Stack(3);
	stack.initializeStack();
	stack.push('+');
	stack.push('1');
	stack.push('2');
	

	for (int i = 33; i < 126; )
	{

	/*	while (stack.isEmpty())
		{
			stack.push((char)i++);

		}*/
		while (!stack.isFullStack())
		{
			stack.push((char)i++);

		}
	
	}

	char  postfixExpression[10] = { '5','1','2', '+', '4', 'x' ,'+' ,'3' ,'-' };
	//while (stack.isFullStack())
	//{
	//	while (stack.top != '+')
	//	{
	//		resolve.push((char)stack.top());
	//		stack.pop();
	//		if (resolve.isFullStack())
	//		{

	//		}
	//	}
	//	
	//	
	//		//pop all and do the operation
	//	 

	//	
	//}
	return 0;
}