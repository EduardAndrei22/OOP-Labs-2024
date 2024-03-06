#include "NumberList.h"
#include <iostream>

void NumberList::Init()
{
    count = 0;
}

bool NumberList::Add(int x)
{
    if (count >= 10)
    {
        return false; 
    }

    numbers[count++] = x;
    return true;
}


void NumberList::Sort()
{
    for (int i = 0; i < count - 1; ++i)
    {
        for (int j = 0; j < count - i - 1; ++j)
        {
            if (numbers[j] > numbers[j + 1])
            {
                
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

void NumberList::Print()
{
    printf("Current vector: ");
    for (int i = 0; i < count; ++i)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
};
