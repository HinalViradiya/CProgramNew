// Program to Find the Sum of Sine Series
// S = x-(x3/3!)+(x5/5!)-(x7/7!)+....

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
    int n, a, x, i;
    int sign = 1;
    float sum = 0, div, radian;

    printf("N : ");
    scanf("%d", &n);
    printf("Enter the X is degree:\n ");
    scanf("%d", &x);
    radian = x * (3.14159 / 180.0);

    for (i = 1; i <= n; i += 2)
    {

        sum = sum + sign * (float)pow(radian, i) / (float)findFacttorial(i);
        sign = sign * -1;
    }

    printf("\n Sum :: %.2f", sum);
    return 0;
}