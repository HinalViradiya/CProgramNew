
// Program to Find the Fibonacci Series without Using Recursion
#include <stdio.h>
int main()
{
    int n, ans, f = 0, f1 = 1;
    printf("Enter the Number  :");
    scanf("%d", &n);
    printf("\n Fibonacci Series : ");
    printf("%d %d ", f, f1);
    for (int i = 1; i < n - 1; i++)
    {
        ans = f + f1;
        printf("%d ", ans);
        f = f1;
        f1 = ans;
    }
    return 0;
}