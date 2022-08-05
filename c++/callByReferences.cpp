/* Call By Address
 Value changed inside the function, is reflected inside as well as outside the function.
 swipe the value of two variable
*/
#include <iostream>
using namespace std;

void swipe(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10, b = 20;

    cout << "\nBefor A: " << a << " B: " << b;
    swipe(&a, &b);
    cout << "\nAfter A: " << a << " B: " << b;
    return 0;
}