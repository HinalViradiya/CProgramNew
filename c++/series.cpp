// c++ program to find out the sum of an A.P. series by using the classes and objects in object-oriented programming

#include <iostream>
using namespace std;
class Series
{
protected:
    int n1, n2, diff, i, seriesSum;

public:
    void input();
    void calcSeries();
};

void Series ::input()
{
    seriesSum = 0;
    
    cout << "Enter the Starting Number :";
    cin >> n1;

    cout << "Enter the Total Term :";
    cin >> n2;

    cout << "Enter the Increment by :";
    cin >> diff;
}

void Series ::calcSeries()
{
    int last = 1;
    last = n1 + (n2 - 1) * diff;
    for (i = n1; i <= last; i = i + diff)
    {
        seriesSum = seriesSum + i;
        if (i != last)
            cout << i << " + ";
        else
            cout << i << " = " << seriesSum;
    }
}

int main()
{
    Series s;
    s.input();
    s.calcSeries();
    return 0;
}