// Program to Read a Number n and Compute n+nn+nnn
#include <stdio.h>
int main()
{

    int n, t2 = 0, t3 = 0;

    printf("Enter the Number :");
    scanf("%d", &n);
    t2 = n * n;
    t3 = n * n * n;
    printf("\nTerm : %d+%d+%d", n, t2, t3);

    printf("\nTotal : %d", n + t2 + t3);
}
