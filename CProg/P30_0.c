/* Program to Form an Integer that has the Number of Digits at
Ten's Place and the Least Significant Digit of the Entered Integer at One's Place */

#include <stdio.h>
#include <stdio.h>
int main()
{
    int n1, ans;

    printf("\nEnter the Number :");
    scanf("%d", &n1);
    int rem = 0, noOfDigit = 0, last = n1 % 10;
    while (n1 > 0)
    {
        rem = n1 % 10;
        n1 /= 10;
        noOfDigit++;
    }
    ans = (noOfDigit * 10) + last;
    printf("\nAns  %d", ans);
}