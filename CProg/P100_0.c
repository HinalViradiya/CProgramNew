// Program to Check if a Substring is Present in a Given String

#include <stdio.h>
#include <string.h>
int main()
{
    char main[100], sub[100];
    int m = 0, n = 0, flag = 0;

    printf("\nEnter the String :");
    gets(main);

    printf("\nEnter the sub String :");
    gets(sub);

    // scanf("%[^\n]s",str);     Get String with space character
    m = strlen(main);
    n = strlen(sub);
    if (m > n)
    {
        for (int i = 0; i <= m - n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                if (main[i] != sub[j])
                {
                    flag = 1;
                    break;
                }
            }
            flag = 2;
        }
    }
    else
    {
        for (int i = 0; i <= n - m; i++)
        {
            for (int j = 0; j < m; j++)
            {

                if (sub[i] != main[j])
                {
                    flag = 1;
                    break;
                }
            }
            flag = 3;
        }
    }

    if (flag == 2)
    {
        printf("\n\"%s\"  string is present on \"%s\" String:", sub, main);
    }
    else if (flag == 3)
    {
        printf("\n \"%s\"  string is present on \"%s\" String:", main, sub);
    }
    return 0;
}