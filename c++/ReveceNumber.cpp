// Write a program to reverse the number by defining the funcitons outside the class

#include <iostream>
using namespace std;

class Reverse
{
    int num;

public:
    void getData();
    int reveseNumber();
};

void Reverse ::getData()
{
    cout << "Enter the number :";
    cin >> num;
}

int Reverse ::reveseNumber()
{
    int i, reminder = 1, reverseNumber = 0;
    do
    {
        reminder = num % 10;
        reverseNumber = (reverseNumber *10)  + reminder;
        num = num / 10;
       
    } while (num != 0);

    return reverseNumber;
}

int main()
{
    Reverse rev;
    rev.getData();

    cout<< "\nThe Reverse Number is:: "<<rev.reveseNumber();
    return 0;
}