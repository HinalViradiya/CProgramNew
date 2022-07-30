// Program to Check Whether a Given Year is a Leap Year

#include <stdio.h>
int main()
{
    int year;

    printf("\nEnter the Year :");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("This year is leap year:");
    }
    else
        printf("This year is not leap year:");
}