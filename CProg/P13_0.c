// Program to Count the Number of Digits in a Number

#include <stdio.h>
int main()
{
    int no, temp = 0;

    printf("\nEnter the Number :");
    scanf("%d", &no);

    while (no > 0)
    {
        no = no / 10;
        temp++;
    };
    printf("%d", temp);
}