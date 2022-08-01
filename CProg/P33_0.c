// Print the Pascal's triangle for n number of rows given by the user

#include <stdio.h>
int main()
{
    int no, temp, sp = 15;

    printf("\nEnter the Number  :");
    scanf("%d", &no);

    for (int i = 0; i < no; i++)
    {
        int a = 1;
        for (int k = 15; k > i; k--)
            printf("  ");
        for (int j = 0; j <= i; j++)
        {
            printf(" %d  ", a);
            a = a * (i - j) / (j + 1);
        }
        printf("\n");
    }
}