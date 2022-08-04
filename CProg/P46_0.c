// Program to Find the Sum of Cosine Series
// S = x-(x2/2!)+(x4/4!)-(x6/6!)+....

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
    int sign = -1;
    float sum = 1, div, radian;

    printf("N is No of Tems: ");
    scanf("%d", &n);
    printf("X is degree: ");
    scanf("%d", &x);
    radian = x * (3.14159 / 180.0);

    for (i = 2; i <= n; i += 2)
    {
        sum = sum + sign * (float)pow(radian, i) / (float)findFacttorial(i);
        sign = sign * -1;
    }

    printf("\n Sum of the cosine series is :: %.2f", sum);
    return 0;
}