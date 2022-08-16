// Program to Find the Binary Equivalent of a Number Recursively

#include <stdio.h>
int binaryNumber(int no)
{
    int result = 0;
    if (no == 0)
    {
        result = 0;
    }
    else
    {
        result = no % 2 + 10 * (binaryNumber(no / 2));
    }
    return result;
}

int main()
{
    int no, binary = 0;

    printf("\nEnter the No:");
    scanf("%d", &no);

    binary = binaryNumber(no);
    printf("\n%d equivalent Binary no is :: %d", no, binary);

    return 0;
}