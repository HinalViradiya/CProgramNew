/*Program to test Collatz Conjecture for a Given Number
f(n)=n/2   if n is even        f(n)=3n+1 if n is odd
*/

#include <stdio.h>
int main()
{
    int n;
    int a, t;

    printf("Enter the no :");
    scanf("%d", &n);
    t = n;
    while (t != 1)
    {
        if (t % 2 == 0)
        { // Even
            t = (t / 2);
            printf("%d ", t);
        }
        else
        { // odd
            t = (3 * t) + 1;
            printf("%d ", t);
        }
    }
    return 0;
}