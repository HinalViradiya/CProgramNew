// Program to Read a Number n and Compute n+nn+nnn
#include <stdio.h>
int main()
{
    int n, t2 = 1, t3 = 1;
    float total = 0.0;

    printf("Enter the Number :");
    scanf("%d", &n);
    total = n;
    for (int i = 0, t2 = n; i < n; t2 = t2 * n, i++)
    {
        t3 = t2;
        total += (float)t3;
        if (i >= (n - 1))
        {
            printf("%d = ", t3);
        }
        else
        {
            printf("%d + ", t3);
        }
    }
    printf("%f", total);
}
