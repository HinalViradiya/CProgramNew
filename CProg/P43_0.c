// Program to Print all the Prime Numbers within a Given Range

#include <stdio.h>
int primeNumber(int n)
{
    int state = 0;
    int rem;
    for (int i = 2; i < n; i++)
    {
        rem = n % i;
        if (rem < 1)
        {
            state = 1;
            break;
        }
    }
    return state;
}
int main()
{
    int n = 12, div;
    printf("\nPrime number in Range are:: \n");
    for (int i = 2; i < n; i++)
    {
        div = primeNumber(i);
        if (div == 0)
        {
            printf("%d ", i);
        }
    }
}