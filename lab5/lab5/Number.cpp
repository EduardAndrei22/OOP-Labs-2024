#define _CRT_SECURE_NO_WARNINGS
#include "Number.h"
#include <cstring>
#include <stdio.h>
#include <stdlib.h>




Number::Number(const char* value, int base)
{
    this->value = new char[21];
    strcpy(this->value, value);
    if (base >= 2 && base <= 16)
        this->base = base;
}
Number::Number(const Number& objToCopyFrom)
{
    this->value = new char[21];
    strcpy(this->value, objToCopyFrom.value);
    this->base = objToCopyFrom.base;
}

Number::Number(Number&& objToMoveFrom)
{
    this->value = objToMoveFrom.value;
    this->base = objToMoveFrom.base;
    objToMoveFrom.value = nullptr;
    objToMoveFrom.base = 10;
}

Number::~Number()
{
    delete[] this->value;
}

bool operator<(Number n1, Number n2)
{
    Number a = n1;
    Number b = n2;
    
    if (strcmp(a.value, b.value) < 0)
        return true;
    else
        return false;
}

bool operator>(Number n1, Number n2)
{
    Number a = n1;
    Number b = n2;
    
    if (strcmp(a.value, b.value) > 0)
        return true;
    else
        return false;
}

bool operator<=(Number n1, Number n2)
{
    Number a = n1;
    Number b = n2;
    
    if (strcmp(a.value, b.value) <= 0)
        return true;
    else
        return false;
}

bool operator>=(Number n1, Number n2)
{
    Number a = n1;
    Number b = n2;
    
    if (strcmp(a.value, b.value) >= 0)
        return true;
    else
        return false;
}

bool operator==(Number n1, Number n2)
{
    Number a = n1;
    Number b = n2;
    
    if (strcmp(a.value, b.value) == 0)
        return true;
    else
        return false;
}

Number operator-(Number n1, Number n2)
{
    printf("operator-");
    int base;
    Number a = n1;
    Number b = n2;
    if (a.base > b.base)
        base = a.base;
    else
        base = b.base;


    int result = atoi(a.value) - atoi(b.value);


    _itoa(result, a.value, sizeof(a.value));

    return a;
}

Number operator+(Number n1, Number n2)
{
    printf("operator+");
    int base;
    Number a = n1;
    Number b = n2;
    if (a.base > b.base)
        base = a.base;
    else
        base = b.base;

    

    int result = atoi(a.value) + atoi(b.value);

    

    _itoa(result, a.value, sizeof(a.value));

    return a;
}

Number& Number::operator=(Number&& n)
{
    if (this != &n)
    {
        delete[] value;
        value = n.value;
        base = n.base;
        n.value = nullptr;
        n.base = 0;
    }
    return *this;
}


void Number::Print()
{
    printf("%s\n", this->value);
}

int Number::GetDigitsCount()
{
    return strlen(this->value);
}

int Number::GetBase()
{
    return this->base;
}

