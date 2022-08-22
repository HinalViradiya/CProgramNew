// Program to Find the Product of two Numbers Using Recursion

#include <stdio.h>
int findProduct(int n1, int n2)
{
    printf("\n%d %d", n1, n2);

    if (n1 == 0)
        return 0;
    if (n2 == 0)
        return 0;
    if (n1 < n2)
    {
        return findProduct(n2, n1);
    }
    else if (n2 != 0)
    {
        return n1 + findProduct(n1, n2 - 1);
    }
}

int main()
{
    int n1, n2;

    printf("\nEnter the 1st no:");
    scanf("%d", &n1);
    printf("\nEnter the 2nd no:");
    scanf("%d", &n2);
    int result = findProduct(n1, n2);
    printf("Product of the no is: %d", result);

    return 0;
}