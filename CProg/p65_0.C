// Program to Find the Second Largest Number in a List Using Bubble Sort

#include <stdio.h>
int main()
{
    int no[100], t = 0, n, temp = 0, counter = 0, max = 0, min = 0;

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
            if (no[i] > no[j])
            {
                temp = no[i];
                no[i] = no[j];
                no[j] = temp;
            }
        }
    }
    printf("Second Largest No is :: %d", no[n - 2]);
    return 0;
}