// Program to Print Sum of Negative Numbers, Positive Even Numbers and Positive Odd numbers in a List

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int nos[100];
    int size;

    printf("Enter the array size  :");
    scanf("%d", &size);

    printf("Enter the Positive ,Negative Number :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &nos[i]);
    }
    int sumNeg = 0, sumOdd = 0, sumEven = 0;
    for (int i = 0; i < size; i++)
    {

        if (nos[i] < 0)
        {
            sumNeg += abs(nos[i]);
        }
        else
        {
            if (nos[i] % 2 == 0)
            {
                sumEven += nos[i];
            }
            else
            {
                sumOdd += nos[i];
            }
        }
    }
    printf("\nSum Of Negative : %d", sumNeg);
    printf("\nSum Of Positive Even : %d", sumEven);
    printf("\nSum Of Positive Odd : %d", sumOdd);
}
