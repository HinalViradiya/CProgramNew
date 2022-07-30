// Program to Print all Integers that Aren't Divisible by Either 2 or 3 and Lie between 1 and 50.

#include <stdio.h>
int main()
{
    for (int i = 1; i < 50; i++)
    {
        if (i % 2 != 0 || i % 3 != 0)
        {
            printf("%d ", i);
        }
    }
}