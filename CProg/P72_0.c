// Program to Generate Random Numbers from 1 to 20 and Append Them to the List

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no[100], n, k = 0, r = 0;

    printf("Enter total number which you add :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        r = rand() % 20;
        printf("\n%d", r);
        if (r >= 1 && r <= 20)
        {
            no[k] = r;
            k++;
        }
    }

    printf("\nArrays: \n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", no[i]);
    }
    return 0;
}