// Program to Find the Sum of the Series: 1 + 1/2 + 1/3 + ….. + 1/N

#include <stdio.h>
int main()
{
    int n;
    float sum = 0, div;
    printf("Enter n Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        div = 1 / i;
        printf("1/%d + ", i);
        sum += i;
    }
    printf("\nSum of Series : %.2f", sum);
    return 0;
}