// Program to Read Two Numbers and Print Their Quotient and Remainder.

#include <stdio.h>

int main()
{
    int n1, n2;
    float q, r;

    printf("\nEnter the 1st Number : ");
    scanf("%d", &n1);

    printf("\nEnter the 2nd Number : ");
    scanf("%d", &n2);

    q = (float)n1 / (float)n2;
    r = n1 % n2;

    printf("The Quotient : %.2f", q);
    printf("\nThe Remainder : %.2f", r);
}