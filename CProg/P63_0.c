// Program to Merge Two Lists and Sort it

#include <stdio.h>
int main()
{
    int no1[100], no2[100], n1, n2, temp = 0;
    int merge[200], s;

    printf("Enter the 1st array size :");
    scanf("%d", &n1);
    printf("Enter the 2nd array size :");
    scanf("%d", &n2);

    printf("\nEnter %d integers: \n", n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &no1[i]);
        merge[i] = no1[i];
    }
    s = n1;
    printf("\nEnter %d integers: %d\n", n2, s);
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &no2[i]);
        merge[s] = no2[i];
        s++;
    }
    /*  // print merge array
     for (int i = 0; i < s; i++)
     {
         printf("%d ", merge[i]);
     }
  */
    for (int i = 0; i < s; i++)
    {
        for (int j = i + 1; j < s; j++)
        {
            if (merge[i] > merge[j])
            {
                temp = merge[i];
                merge[i] = merge[j];
                merge[j] = temp;
            }
        }
    }
    printf("\nMerge Sorted Array is :\n ");
    for (int i = 0; i < s; i++)
    {
        printf("%d ", merge[i]);
    }

    return 0;
}
