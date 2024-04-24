#pragma once


class CircularString:
private:
	const char caracter;
	const char* string[];
	int length;
	int vectorASCII[];
public:
{
	void CircularString(const char* string, int length);
	CircularString& operator+=(const char string, const char caracter);
	CircularString& operator++( char caracter);
	CircularString& operator--( char caracter);
	int setlength(const char string);
	int ASCIICode(const char string,int length);
}


