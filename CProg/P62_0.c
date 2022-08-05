// Program to Put Even and Odd elements in a List into Two Different Lists

#include <stdio.h>
int main()
{
    int no[100], t = 0, n, odd[50], even[50], o, e;

    printf("Enter the array size :");
    scanf("%d", &n);

    printf("Enter %d integers: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &no[i]);
    }
    e = 0;
    o = 0;
    for (int i = 0; i < n; i++)
    {
        if (no[i] % 2 == 0)
        {
            even[e] = no[i];
            e++;
        }
        else
        {
            odd[o] = no[i];
            o++;
        }
    }
    printf("\n The Even List : ");
    for (int i = 0; i < e; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n The Odd List : ");
    for (int i = 0; i < o; i++)
    {
        printf("%d ", odd[i]);
    }
    return 0;
}
