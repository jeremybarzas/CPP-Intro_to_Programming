#pragma once

#include <iostream>
#include <time.h>
#include <stdlib.h>

using std::cout;
using std::cin;

class cString
{
public:
	int size;
	char *chars;

	cString::cString();

	cString::cString(char * c)
	{
		chars = new char[size];
		chars = c;
	}

};