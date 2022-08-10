// Program to Swap the First and Last Value of a List

#include <stdio.h>
int main()
{
    int no[100], n, n1, n2;

    printf("Enter the array size :");
    scanf("%d", &n);

    printf("Enter %d integers: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &no[i]);
    }

    n1 = no[0];
    n2 = no[n - 1];

    no[0] = n2;
    no[n - 1] = n1;
    printf("\nAfter Changes :");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", no[i]);
    }
    return 0;
}