// Program to Find the Fibonacci Series Using Recursion

#include <stdio.h>
int fibo(int n);
int fibo(int n)
{

    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (fibo(n - 1) + fibo(n - 2));
}

int main()
{
    int n, ans, f = 0, f1 = 1;
    printf("Enter the Number  :");
    scanf("%d", &n);
    printf("\n Fibonacci Series : ");
    // printf("%d %d ", f, f1);

    for (int i = 0; i < n; i++)
    {

        printf("%d ", fibo(i));
    }
}