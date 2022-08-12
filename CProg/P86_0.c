// Program to Count the Number of Vowels(a,e,i,o,u) in a String

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
        if (name[i] == 'A' || name[i] == 'a' ||
            name[i] == 'E' || name[i] == 'e' ||
            name[i] == 'I' || name[i] == 'i' ||
            name[i] == 'O' || name[i] == 'o' ||
            name[i] == 'U' || name[i] == 'u')
        {
            vovel++;
        }
    }

    printf("\nNo of Vovel in this String are : %d", vovel);
    return 0;
}