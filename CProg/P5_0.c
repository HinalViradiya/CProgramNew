// Program to Check Whether a Number is Positive or Negative

#include <stdio.h>
int main()
{
    int n;

    printf("Enter the Number :");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Number is Zero");
    }
    else if (n > 0)
    {
        printf("Number is Positive");
    }
    else
    {
        printf("Number is Negative");
    }
}