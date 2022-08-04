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
    int n, a, b, x, i;
    float sum = 0, div;

    printf("Enter a Number : ");
    scanf("%d", &x);
   
/*
    printf("Enter b Number : ");
    scanf("%d", &n);
*/

    printf("Enter N Number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        
    }
    return 0;
}