// Program to Find the Sum of the Digits of the Number Recursively
#include <stdio.h>

int ans = 0;
int sumOfDigit(int rem, int n)
{
    int div;
    if (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        return (rem + sumOfDigit(rem, n));
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n, temp = 0;
    printf("Enter the Number  :");
    scanf("%d", &n);
    temp = sumOfDigit(0, n);
    printf("\n Sum of Digit is :: %d", temp);
}
