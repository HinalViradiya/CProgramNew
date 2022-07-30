// Program to Read a Number n and Compute n+nn+nnn
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

    int n, t2 = 0, t3 = 0, total = 0;
    char no2[50];
    char no3[50];
    char no[10];

    printf("Enter the Number :");

    scanf("%d", &n);
    sprintf(no, "%d", n);

    strcpy(no2, no);
    strcat(no2, no);

    strcpy(no3, no2);
    strcat(no3, no);

    t2 = atoi(no2);
    t3 = atoi(no3);

    printf("\nTerm :%d+%d+%d", n, t2, t3);
}
