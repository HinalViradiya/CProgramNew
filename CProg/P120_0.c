// Program to Determine How Many Times a Given Letter Occurs in a String Recursively

#include <stdio.h>
#include <string.h>

int checkChar(char *str, char ch, int n)
{
    static int l = 0;
    if (str == "")
        return 0;
    else if (str[l] == ch)
    {
        l = l + 1;
        return 1 + checkChar(str, ch, n);
    }
    else if (l < n + 1)
    {
        l = l + 1;
        return checkChar(str, ch, n);
    }
}

int main()
{
    char str[100], ch;
    int len = 0, k = 0;

    printf("\nEnter the String :");
    gets(str);

    printf("\nEnter the Character you want to check :");
    scanf("%c", &ch);
    len = strlen(str);

    k = checkChar(str, ch, len - 1);
    printf("\nThe number occures is: %d", k);

    return 0;
}

// output