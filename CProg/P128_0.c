// Program to Find if a Number is Prime or Not Prime Using Recursion

#include <stdio.h>
int findPrime(int no, int i)
{

    if (no % 2 == 0)
        return 0;
    if (no == 2)
        return 0;

    // return result;
}

int main()
{
    int no, i = 2;

    printf("\nEnter the No:");
    scanf("%d", &no);

    printf(findPrime(no, i) == 1 ? "\nNo Is Prime" : "\nNo is Not Prime");

    return 0;
}