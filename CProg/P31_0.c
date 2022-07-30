// Program to Find Those Numbers which are Divisible by 7 and Multiple of 5 in a Given Range of Numbers
#include <stdio.h>
int main()
{

    int n1;

    printf("\nEnter the Number :");
    scanf("%d", &n1);

    for (int i = 1; i < n1; i++)
    {
        if (i % 7 == 0 && i % 5 == 0)
        {
            printf("\n%d is Divisible by 5 and 7", i);
        }
    }
}