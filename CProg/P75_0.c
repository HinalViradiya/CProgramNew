// Program to Remove the Duplicate Items from a List

#include <stdio.h>
int main()
{
    int no[50], n, n1, n2;

    printf("Enter the array size :");
    scanf("%d", &n);

    printf("Enter %d integers: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &no[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (no[i] == no[j])
            {
                for (int k = j; k < n - 1; k++)
                {
                    no[k] = no[k + 1];
                }
                n--; // decrease the size array
                j--; // position as it then j not changed
            }
        }
    }

    printf(" \n Array elements after remove element: ");

    // for loop to print the array
    for (int i = 0; i < n; i++)
    {
        printf("%d", no[i]);
    }

    return 0;
}