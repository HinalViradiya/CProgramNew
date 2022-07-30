// Program to Check if a Number is a Perfect Number

#include <stdio.h>
int main()
{
    int no, temp;

    printf("\nEnter the Number  :");
    scanf("%d", &no);

    int rem = 0, res = 0;

    for (int i = 1; i <= no / 2; i++)
    {

        if (no % i == 0)
        {
            res = res + i;
            printf("\n%d ", res);
        }
    }
    if (no == res)
    {
        printf("\n%d Number is Perfect Number ", no);
    }
    else
    {
        printf("\n%d Number is not Perfect Number ", no);
    }
}