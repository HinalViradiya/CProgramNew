// Program to Find the Second Largest Number in a List

#include <stdio.h>
int main()
{
int no[100], t = 0, n, counter = 0, max = 0, min = 0;

printf("Enter the array size :");
scanf("%d", &n);

printf("Enter %d integers: \n", n);
for (int i = 0; i < n; i++)
{
    scanf("%d", &no[i]);
}

    for (int i = 0; i < n; i++)
    {
        if (no[i] > max)
        {
            min = max;
            max = no[i];
        }
        else
        {
            min = no[i];
        }
    }
    printf("Second Largest No is :: %d", min);
    return 0;
}