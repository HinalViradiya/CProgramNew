// Program to Find the Sum of First N Natural Numbers

#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter n Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum of %d Number : %d", n, sum);
    return 0;
}