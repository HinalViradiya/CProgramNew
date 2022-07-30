// Program to Print all Numbers in a Range Divisible by a Given Number
#include <stdio.h>
int main()
{
    int no, res;

    printf("\nEnter the Number :");
    scanf("%d", &no);

    for (int i = 2; i < no / 2; i++)
    {
        if (no % i == 0)
        {
            res = no / i;
            printf("%d ", res);
        }
    }
}