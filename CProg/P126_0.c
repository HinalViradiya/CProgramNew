// Program to Find the LCM of Two Numbers Using Recursion

#include <stdio.h>
int findLCM(int no, int n1, int n2)
{
    int result = 0;
    if (no % n1 == 0 && no % n2 == 0)
    {
        return no;
    }
    else
    {
        no++;
        findLCM(no, n1, n2);
    }
}

int main()
{
    int n1, n2, result = 0;

    printf("\nEnter the No:");
    scanf("%d", &n1);
    printf("\nEnter the No:");
    scanf("%d", &n2);

    int max = (n1 > n2) ? n1 : n2;
    result = findLCM(max, n1, n2);
    printf("\nLCM is :: %d", result);

    return 0;
}