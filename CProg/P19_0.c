// Program to Print an Inverted Star Pattern

#include <stdio.h>
int main()
{
    int n, t;

    printf("Enter the number : ");
    scanf("%d", &n);

    t = n * 2;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= (t - i); j++)
        {
            if (j >= i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}