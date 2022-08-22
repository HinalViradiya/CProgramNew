#include <iostream>
using namespace std;
int main()
{
    int x = 10, a, b;
    int y = (2 * 5) / 2; // constant expression
    cout << "\nValue of y : " << y;
    cout << "\nConstant value :" << ((3 / 2) + 2); // constant expression

    cout << "\nEnter the no :" << endl;
    cin >> a;
    cout << "\nEnter the no :" << endl;
    cin >> b;

    int z = a + b; // Integral expression
    cout << "\nValue of Z is : " << z;

    y = x + int(34.6); // Integral expression
    cout << "\nValue of Y is : " << y;

    float f1 = 23.45, f2 = 9.4, f3;
    f3 = f1 + f2; // float expression

    int arr[] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = arr;
    ptr = ptr + 1;
    cout << "\nValue of second element :" << *ptr;

    bool state = a > b; // Relational Expression
    cout << "\nValue of y : " << state;
    cout << "\nRelational Expression : " << ((a + b) >= f2); // Relational Expression

    // special Expression
    /*
    Chained Assignment  a=b=3;
    Embedded Assignment  a= 10 +(b=20);
    Compound Assignment  :a+= 10;
    */

    return 0;
}