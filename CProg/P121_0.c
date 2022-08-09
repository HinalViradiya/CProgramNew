// Program to Find the Fibonacci Series Using Recursion

#include <stdio.h>

static int ans = 0, f = 0, f1 = 1;
void fibo(int n)
{
    static int ans = 0, f = 0, f1 = 1;
    if (n > 0)
    {
        ans = f + f1;
        f = f1;
        f1 = ans;
        printf("%d ", ans);
        fibo(n - 1);
    }
}

int main()
{
    int n, ans, f = 0, f1 = 1;
    printf("Enter the Number  :");
    scanf("%d", &n);
    printf("\n Fibonacci Series : ");
    printf("%d %d ", f, f1);
    fibo(n - 2);
}
