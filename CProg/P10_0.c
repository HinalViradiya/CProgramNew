// Program to Print Odd Numbers Within a Given Range

#include <stdio.h>
int main()
{
    int no, res;

    printf("\nEnter the Number :");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
}