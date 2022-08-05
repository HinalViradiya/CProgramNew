// Check the number is prime number or not.
#include <iostream>
using namespace std;
int main()
{
    int n, i, m = 0, flag = 0;
    cout << "Enter the number is prime or not : ";
    cin >> n;

    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Number is prime";
    }
    else
    {
        cout << "Number is not prime";
    }
    return 0;
}