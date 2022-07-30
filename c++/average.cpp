// average of two number without using class

#include <iostream>
using namespace std;
int main()
{
    float n1, n2;
    float avg = 0;

    cout << "Enter the number 1: ";
    cin >> n1;

    cout << "Enter the number 2: ";
    cin >> n2;

    float sum = n1 + n2;
    avg = sum / 2;

    cout << "\n Sum      :=" << sum;
    cout << "\n Average  :=" << avg;
    return 0;
}
