// Program to Find the Sum of Digits in a Number

#include <stdio.h>
int main()
{
    int n, sum = 0, t;
    printf("Enter the Number :");
    scanf("%d", &n);

    while (n != 0)
    {
        t = n % 10;
        n = n / 10;
        sum += t;
    }
    printf("\nSum Of All Digit is : %d", sum);
}