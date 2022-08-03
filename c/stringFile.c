#include <stdio.h>
int main()
{
    char adr1[20];
    scanf("%[^\n]", adr1);
    // scanf("%s", adr1);

    printf("%s", adr1);
}

/* void printStr(char str[])
{
    printf("String is : %s", str);
}

int main()
{
    // declare and initialize string
    char str[] = "Hinal Viradiya";

    // print string by passing string
    // to a different function
    printStr(str);

    return 0;

} */