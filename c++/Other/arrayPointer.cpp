#include <iostream>
using namespace std;

int main()
{
    int n = 5; // size of array
    cout << "\nEnter the size of the array :";
    cin >> n;

    int *array = new int[n]; // creating array
    cout << "\nEnter the element of array :";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Element of array which you entered are: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << ",";
    }
    delete array;
    return 0;
}
