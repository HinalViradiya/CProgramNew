// Program to Check if a Number is a Prime Number

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
    int n = 7, div = 0;
    div = primeNumber(n);

    if (div == 0)
    {
        printf("%d Number is Prime Number", n);
    }
    else
    {
        printf("%d Number is not a Prime Number", n);
    }
}
