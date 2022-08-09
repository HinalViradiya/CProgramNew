// Program to Find the Factorial of a Number Using Recursion

#include <stdio.h>
#include <math.h>

int findFacttorial(int n)
{
    int k = 1;
    if (n >= 1)
    {
        return n * findFacttorial(n - 1);
    }
    else
        return 1;
}

int main()
{
    int n;
    float sum = 0, div, fact;

    printf("Enter n Number : ");
    scanf("%d", &n);

    fact = findFacttorial(n);

    printf("\nSum of Series : %.2f", fact);
    return 0;
}