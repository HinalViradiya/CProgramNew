// Program to find the factorial of a number without recursion

#include <stdio.h>

int findFactorial(int n)
{
    int fact = 1;
    while (n <= 1)
    {
        fact = fact * (n);
        n--;
        printf("%d", fact);
    }
    return fact;
}

int main()
{
    int n;
    long fact;

    printf("Enter n Number : ");
    scanf("%d", &n);

    fact = findFactorial(n);
    printf("\nSum of Series : %.2f", fact);
    return 0;
}
