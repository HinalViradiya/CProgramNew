// Usse of Manipulators.

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int Basic = 950, Allowance = 95, Total = 1045;

    cout << setw(10) << "Basic" << setw(10) << Basic << endl
         << setfill('*') << setw(10) << "Allowance" << setw(10) << Allowance << endl
         << setw(10) << "Total" << setw(10) << Total << endl;
}