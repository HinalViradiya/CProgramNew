// Program to Compute Simple Interest Given all the Required Values

#include <stdio.h>
int main()
{
    float y;
    float rate, p, ans;

    printf("Enter the Principle amount :");
    scanf("%f", &p);
    printf("Enter the Rate :");
    scanf("%f", &rate);
    printf("Enter the year:");
    scanf("%f", &y);

    ans = p * rate * y / 100;

    ans += p;
    printf("\n Simple Interest is : %.2f", ans);
}