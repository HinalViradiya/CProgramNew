/*  call by value --- If you change the value of function parameter,
 it is changed for the current function only. It will not change
  the value of variable inside the caller method such as main().
 */

#include <iostream>
using namespace std;
void change(int data); // method declaration
int main()
{
    int data = 3;
    change(3);
    cout << "Value of Data is  ::" << data << endl;
    return 0;
}
void change(int data)
{
    data = 10;
}
