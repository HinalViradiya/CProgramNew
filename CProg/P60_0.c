// Program to Find the Largest Number in a List

#include <stdio.h>
int main()
{
    int no[100], t = 0, n, counter = 0, max = 0;

    printf("Enter the array size :");
    scanf("%d", &n);

    printf("Enter %d integers: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &no[i]);
    }

    printf("Displaying integers:\n ");
    for (int i = 0; i < n; i++)
    {
        if (no[i] > max)
        {
            max = no[i];
        }
    }
    printf("Largest No is :: %d", max);
    return 0;
}
