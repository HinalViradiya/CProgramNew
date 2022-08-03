// Program to Find the GCD of Two Numbers
#include <stdio.h>
int main()
{
    int n1, n2, GCD = 1;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in max
    for (int i = 2; i < n1 && i < n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            GCD = i;
        }
    }
    printf("Greatest Common Divisor : %d", GCD);
    return 0;
}