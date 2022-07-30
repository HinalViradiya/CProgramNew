// Program to Find the Smallest Divisor of an Integer
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
            printf("%d * %d ", i, res);
            break;
        }
    }
}