// Program to Read a Number n And Print the Series "1+2+…..+n= "
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("\nEnter the Number :");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (i < n - 1)
            printf("%d + ", i);
        else
            printf("%d = ", i);
        sum += i;
    }
    printf(" %d ", sum);
}
