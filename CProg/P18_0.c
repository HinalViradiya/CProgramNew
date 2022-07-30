// Program to Print an Identity Matrix

#include <stdio.h>

int main()
{

    int no[20][20];
    int n;
    printf("Enter the size of Matrix :\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {

                no[i][j] = 1;
            }
            else
                no[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", no[i][j]);
        }
        printf("\n");
    }
}