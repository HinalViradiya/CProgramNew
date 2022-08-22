#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    char ch = '0';
    printf("Enter the No :");
    scanf("%d", &n);

above:
    if (i <= n)
    {
        cout << int(ch) << " ";
        ch++;
        i++;
        goto above;
    }

    return 0;
}