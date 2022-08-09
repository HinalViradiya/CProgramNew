// Program to Find the Sum of Elements in a List Recursively

#include <stdio.h>
int main()
{
    int no[100], i, t = 0, n, sum = 0;

    printf("Enter the array size :");
    scanf("%d", &n);

    printf("Enter %d integers: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &no[i]);
    }
    i = n;
    sum = sumElement(no, i);
    printf("Sum of Element is :: %d", sum);

    return 0;
}
int sumElement(int arr[], int i)
{
    if (i <= 0)
        return 0;
    else
    {
        return arr[i - 1] + sumElement(arr, i - 1);
    }
    return 0;
}
