// Program to Reverse a Given Number with recursion

#include <stdio.h>
int main()
{
    int n, rev = 0, t;
    printf("Enter the Number if you want to reverse it :");
    scanf("%d", &n);
    rev = reveseNum(n);
    printf("Revese Number is : %d", rev);
}
int r, sum = 0;
int reveseNum(int no)
{
    if (no > 0)
    {
        r = no % 10;
        sum = (sum * 10) + r;
        reveseNum(no / 10);
    }
    else
    {
        return sum;
    }
    return sum;
}