// Program to Find Whether a Number is a Power of Two

#include <stdio.h>
int isPowerofTwo(int no)
{
    if (no == 0)
    {
        return 0;
    }
    while (no != 1)
    {
        if (no % 2 != 0)
            return 0;
        no /= 2;
        printf("%d ", no);
    }
    return 1;
}
int main()
{
    int no;
    printf("\nEnter the Number :");
    scanf("%d", &no);
    int div = isPowerofTwo(no);

    printf(div == 0 ? "No is not power of 2" : "No is power of 2");
    return 0;
}