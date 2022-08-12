// Program to Replace all Occurrences of ‘a’ with $ in a String

#include <stdio.h>
int main()
{
    char name[100], vovel = 0;
    int len = 0;
    printf("\nEnter the String :");
    gets(name);
    // scanf("%[^\n]s",str);   Get String with space character

    for (int i = 0; name[i] != '\0'; i++)
    {
        len++;
        if (name[i] == 'A' || name[i] == 'a')
        {
            name[i] = '$';
        }
    }

    printf("\nNew String is : %s", name);
    return 0;
}