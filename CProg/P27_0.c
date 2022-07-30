// Program to Print Table of a Given Number

#include <stdio.h>
int main()
{

    int no;
    printf("Enter the Number  :");
    scanf("%d", &no);

    for (int i = 1; i <= 10; i++)
    {
        printf("\n%d * %d = %d", no, i, (i * no));
    }
}