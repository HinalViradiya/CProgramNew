// Program to Determine all Pythagorean Triplets in the Range
// a2 + b2 = c2.

#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, a, b, c, n1, n2;
    float s;

    printf("Enter the N : ");
    scanf("%d", &n1);

    for (i = 1; i < n1; i++)
    {
        for (j = i + 1; j < n1; j++)
        {
            for (int k = j + 1; k < n1; k++)
            {
                a = i * i;
                b = j * j;
                c = k * k;
                if (a + b == c)
                {
                    printf("\n%d  %d  %d", i, j, k);
                }
            }
        }
    }
    // printf("\n  %.2f", area);
    return 0;
}