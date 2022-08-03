// Program to Print Numbers in a Range (1,upper) Without Using any Loops

#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter the two numbers which you want to print:\n");
    scanf("%d %d", &n1, &n2);

again:
    if (n1 < n2)
    {
        printf("%d ", n1);
        n1++;
        goto again;
    }
    else
    {
        goto exit;
    }
exit:
    return 0;
}