#include <iostream>
#include "CircularString.h"
using namespace std;



CircularString& operator+=(const char string, char caracter)
{
	string = string + caracter;
	
}

CircularString& operator++(char caracter)
{
	caracter = caracter + 1;
	
}

CircularString& operator--( char caracter)
{
	caracter = caracter - 1;
	
}

int setlength(const char string)
{
	int i = 0;
	while (!string)
	{
		string--;
		i++;
	}
	return i;
}

int ASCIICode(const char string, int length)
{
	for (int i = 0; i <= length; i++)
	{
		vectorASCII[i] = string[i] + '0';
	}
}

