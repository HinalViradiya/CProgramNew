// cpp Program add two time by call reference and call by address

#include <iostream>
using namespace std;

class Time
{
private:
    /* data */
    int hr, min, sec;

public:
    void get();
    // Called by Reference
    void sum(Time &, Time &);
    void display()
    {
        cout << "\n[" << hr << ":" << min << ":" << sec << "]";
    }
    
    ~Time();
};

void Time::get()
{
    cout << "\nEnter the hours:";
    cin >> hr;

    cout << "\nEnter the Minutes:";
    cin >> min;

    cout << "\nEnter the Seconds:";
    cin >> sec;
}

void Time ::sum(Time &t1, Time &t2)
{
    sec = t1.sec + t2.sec;
    min = sec / 60;
    sec = sec % 60;
    min = min + t1.min + t2.min;
    hr = min / 60;
    min = min % 60;
    hr = hr + t1.hr + t2.hr;
}

Time::~Time()
{
    cout << "\nDescructor called Automatically.";
}

int main()
{
    Time t1,t2,t3;
    cout << "\nEnter the 1st Time Detail.:";
    t1.get();
    cout << "\nEnter the 2nd Time Detail.:";
    t2.get();

    t1.display();
    t2.display();

    t3.sum(t1,t2);

    cout<<"\n The sum of the Two Times are ::";
    t3.display();
    return 0;
}
