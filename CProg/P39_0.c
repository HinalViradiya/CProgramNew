// Program to Check If Two Numbers are Amicable Numbers

#include <stdio.h>
#include <stdlib.h>

int *findDivisor(int no)
{
    static int res[50];
    for (int i = 2, k = 0; i <= no / 2; i++)
    {
        if (no % i == 0)
        {
            res[k] = i;
            printf("%d ", res[k]);
            k++;
        }
    }
    return res;
}

int findSumDivisor(int no)
{
    int sum = 0;
    for (int i = 2; i <= no / 2; i++)
    {
        if (no % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int n1, n2, sum1, sum2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    sum1 = findSumDivisor(n1);
    sum2 = findSumDivisor(n2);

    if (sum1 == n2 && sum2 == n1)
    {
        printf("\nBoth Number are Amicable Number ");
    }
    else
    {
        printf("\nBoth Number are Amicable Number ");
    }
    return 0;
}
