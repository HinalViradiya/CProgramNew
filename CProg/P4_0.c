// Program to Reverse a Given Number

#include <stdio.h>
int main()
{
    int n, rev = 0, t;
    printf("Enter the Number if you want to reverse it :");
    scanf("%d", &n);
    while (n != 0)
    {
        t = n % 10;
        rev = (rev * 10) + t;
        n = n / 10;
    }
    printf("Revese Number is : %d", rev);
}