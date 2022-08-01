// Program to Check if a Number is a Strong Number
#include <stdio.h>
int factorial(int);
int main()
{
    int n, ans = 0, rem, temp;
    printf("Eneter the Number :");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        ans += factorial(rem);
        printf("\nAns : %d", ans);
        n = n / 10;
    }
    if (temp == ans)
    {
        printf("\n%d is Strong Number  %d", temp, ans);
    }
    else
    {
        printf("\n%d is not Strong Number %d", temp, ans);
    }
}
int res = 1;
int factorial(int n)
{
    // printf("%d", res);
    if (n <= 1)
    {
        return res;
    }
    while (n > 0)
    {
        return n * factorial(n - 1);
    }
}