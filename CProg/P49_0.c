// Program to Find the Sum of the Series: 1 + x^2/2 + x^3/3 + … x^n/n

#include <stdio.h>
#include <math.h>
int main()
{
    int n, x;
    float sum = 0, div;

    printf("Enter x Number : ");
    scanf("%d", &x);

    printf("Enter n Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            div = 1;
        }
        else
        {
            div = pow(x, i) / i;
        }
        printf("%.2f + ", div);
        sum += div;
    }
    printf("\nSum of Series : %.2f", sum);
    return 0;
}