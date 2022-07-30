// Write a cpp program to various mathematical operations using Switch case
#include <iostream>
using namespace std;

int sum(int n1, int n2)
{
    return n1 + n2;
}

int sub(int n1, int n2)
{
    return n1 - n2;
}

int mul(int n1, int n2)
{
    return n1 * n2;
}

int division(int n1, int n2)
{
    return n1 / n2;
}

int main()
{
    char op;
    int n1, n2;

    cout << "Enter the Number1 ::";
    cin >> n1;

    cout << "Enter the Number2 ::";
    cin >> n2;

    cout << "Enter the any one Operator (+,-,*,/) which you perform on above two Number  :: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Sum ::" << sum(n1, n2);
        break;

    case '-':
        cout << "Sub ::" << sub(n1, n2);
        break;

    case '*':
        cout << "Mul ::" << mul(n1, n2);
        break;

    case '/':
        cout << "Div ::" << division(n1, n2);
        break;

    default:
        break;
    }
}

