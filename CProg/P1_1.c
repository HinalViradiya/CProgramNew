// 2nd -Program to Calculate the Average of Numbers in a Given List

#include <stdio.h>
int main()
{
    int marks[99], m, i, size = 0, total = 0;
    float avg = 0;

    printf("Enter the Subject marks (Exit with 0) :");
    for (int i = 0;; i++)
    {
        scanf("%d", &marks[i]);
        if (marks[i] <= 0)
        {
            break;
        }
        size++;
        total += marks[i];
    }
    avg = (float)total / (float)size;
    printf("Average of array element :%f\n", avg);
    return 0;
}