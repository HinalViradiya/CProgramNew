// Program to Take in the Marks of 5 Subjects and Display the Grade
#include <stdio.h>
int main()
{
    int m[5];
    char grade;
    float per, total = 0;
    printf("Enter the marks of Five subject (out of 100):\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &m[i]);
        total += m[i];
    }

    per = (float)(total * 100) / 500;

    if (per >= 80)
    {
        grade = 'A';
    }
    else if (per >= 60 && per < 80)
    {
        grade = 'B';
    }
    else if (per >= 40 && per < 60)
    {
        grade = 'C';
    }
    else
    {
        grade = 'F';
    }
    printf("\n---------------------------------------");
    printf("\nTotal      :%f", total);
    printf("\nPercentage :%f", per);
    printf("\nGrade      :%c", grade);
}