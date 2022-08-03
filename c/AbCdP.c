#include <stdio.h>
int main()
{
    int i, j, c, s;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1, c = 65, s = 97; j <= i; j++, c++, s++)
        {
            if (j % 2 == 0)
            {
                printf("%c ", s);
            }
            else
            {
                printf("%c ", c);
            }
        }
        printf("\n");
    }
}