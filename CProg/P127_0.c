// Program to Find the GCD of Two Numbers Using Recursion

#include <stdio.h>
int findGCD(int n1, int n2)
{
    if (n1 == 0)
        return n2;
    if (n2 == 0)
        return n1;
    if (n1 == n2)
        return n1;
    else if (n1 > n2)
        return findGCD(n1 - n2, n2);
    else if (n2 > n1)
        return findGCD(n1, n2 - n1);
}
int main()
{
    int n1, n2, result = 0, i = 2;

    printf("\nEnter the No:");
    scanf("%d", &n1);
    printf("\nEnter the No:");
    scanf("%d", &n2);

    result = findGCD(n1, n2);
    printf("\nGCD is :: %d", result);

    return 0;
}