// 1st -Program to Calculate the Average of Numbers in a Given List

#include <stdio.h>
int main()
{
    int nos[100], size;
    float avg = 0;

    printf("Enter the Array Size: ");
    scanf("%d", &size);

    printf("Enter the Value in array :\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &nos[i]);
        avg = avg + nos[i];
    }
    avg = avg / size;
    printf("Average of array element :%f\n", avg);
    /* for (int i = 0; i < size; i++)
    {
        printf("%d\n", nos[i]);
    } */

    return 0;
}