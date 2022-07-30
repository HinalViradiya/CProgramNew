// Program to Check if a Number is an Armstrong Number
#include <stdio.h>
int main()
{
    int no, temp;

    printf("\nEnter the Number  :");
    scanf("%d", &no);
    int rem = 0, res = 0;
    temp = no;
    while (no > 0)
    {
        rem = no % 10;
        res += (rem * rem * rem);
        no = no / 10;
    }

    if (temp == res)
    {
        printf("\n %d is Armstrong Number", res);
    }
    else
        printf("\n %d is not Armstrong Number", res);
}
