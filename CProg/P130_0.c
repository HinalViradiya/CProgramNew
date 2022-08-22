// Program to Find the Power of a Number Using Recursion

#include <stdio.h>

int findPower(int n1, int n2)
{

    if (n1 == 0)
        return 0;
    if (n2 == 0)
        return 1;
    if (n2 == 1)
        return n1;
    else if (n2 != 0)
    {
        return n1 * findPower(n1, n2 - 1);
    }
}
int main()
{
    int n1, n2;

    printf("\nEnter the 1st no:");
    scanf("%d", &n1);
    printf("\nEnter the 2nd no:");
    scanf("%d", &n2);
    int res = findPower(n1, n2);
    printf("\n Result : %d", res);
    return 0;
}