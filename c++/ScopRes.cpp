// Used of scope resolution Operator

#include <iostream>
using namespace std;
int m = 10; // Global variable m

int main()
{
    int m = 20; // m redeclard to local
    {
        int k = m;
        int m = 30; // m again redeclard to local

        cout << "\nWe are in Inner block ";
        cout << "K : " << k << "\n";
        cout << "M: " << m << "\n";
        cout << "::M " << ::m;
    }
    cout << "\nWe are in Outer block ";
    cout << "\nM: " << m;
    cout << "\n::M " << ::m;
}
