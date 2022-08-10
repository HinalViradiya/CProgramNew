// Variables in cPP

#include <iostream>
using namespace std;

namespace first
{
    int val = 100; // NameSpace Variable
}

int val = 300; // Global Variable
int main()
{
    int val = 400;              // Local Variable
    cout << "\nValue :" << val; // 400

    {
        int val = 200;
        cout << "\nValue :" << val; // 200
    }

    cout << "\nValue :" << val;         // 400
    cout << "\nValue :" << first ::val; // 100
    cout << "\nValue :" << ::val;       // 300
    return 0;
}