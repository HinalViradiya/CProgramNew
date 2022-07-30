// Program to Check if a Number is a Palindrome

#include <stdio.h>
int main()
{
    int n, rev = 0, t, temp;
    printf("Enter the Number if you want to reverse it :");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        t = n % 10;
        rev = (rev * 10) + t;
        n = n / 10;
    }
    if (temp == rev)
    {
        printf("The %d Number is plaindrom ", rev);
    }
    else
    {
        printf("The %d Number is not plaindrom ", rev);
    }
}