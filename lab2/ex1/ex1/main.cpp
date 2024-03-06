#include "NumberList.h"
#include <iostream>
int main()
{
    NumberList myList;
    myList.Init();

    myList.Add(5);
    myList.Add(2);
    myList.Add(8);
    myList.Add(1);
    myList.Add(7);
    myList.Add(3);

    for (int i = 0; i < 5; ++i)
    {
        if (!myList.Add(i))
        {
            printf("Cannot add more elements. List is full.\n");
        }
    }

    myList.Sort();
    myList.Print();

    return 0;
}