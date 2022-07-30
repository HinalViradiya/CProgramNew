// Program to Exchange the Values of Two Numbers Without Using a Temporary Variable
// Using Addition and Subtraction
#include <stdio.h>
int main()
{
    int a, b;
    printf("\nEnter the 1st Number:: ");
    scanf("%d", &a);

    printf("\nEnter the 2nd Number:: ");
    scanf("%d", &b);

    a = a + b;

    b = a - b;

    a = a - b;

    printf("\nThe Value of A :%d", a);
    printf("\nThe Value of B :%d", b);

    return 0;
}