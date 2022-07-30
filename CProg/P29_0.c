// Program to Print Largest Even and Largest Odd Number in a List

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int nos[100];
    int size;

    printf("Enter the array size  :");
    scanf("%d", &size);

    printf("Enter the Numbers :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &nos[i]);
    }
    int maxE = 0, maxO = 0;
    for (int i = 0; i < size; i++)
    {
        if (nos[i] % 2 == 0)
        {
            if (maxE < nos[i])
                maxE = nos[i];
        }
        else
        {
            if (maxO < nos[i])
                maxO = nos[i];
        }
    }
    printf("\nMax Odd : %d\nMax Even : %d", maxO, maxE);
}