// Program to Compute the Value of Euler's Number e. Use the Formula: e = 1 + 1/1! + 1/2! + …… 1/n!

#include <stdio.h>
#include <math.h>

int findFacttorial(int n)
{
    int k = 1;
    if (n >= 1)
    {
        return n * findFacttorial(n - 1);
    }
    else
        return 1;
}

int main()
{
    int n;
    float sum = 0, div;

    printf("Enter n Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        div = 1 / (float)findFacttorial(i);

        printf("1/%d! + ", i, div);

        sum += div;
    }
    printf("\nSum of Series : %.2f", sum);
    return 0;
}