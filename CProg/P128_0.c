// Program to Find if a Number is Prime or Not Prime Using Recursion

#include <stdio.h>
int findPrime(int no, int i)
{

    if (no == i)
        return 0;
    else if (no % i == 0)
        return 1;
    else
        return findPrime(no, i + 1);
}

int main()
{
    int no, i = 2;

    printf("\nEnter the No:");
    scanf("%d", &no);

    printf(findPrime(no, 2) == 0 ? "\nNo Is Prime" : "\nNo is Not Prime");

    return 0;
}