// write a program to add student detail using classes.

#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
    int stdNo;
    char sname[40];
    string div;
    int std;
    string schoolName;

public:
    void getData();
    void setData();
};

void Student ::getData()
{
    cout << "\n------------------Student Detail----------------";
    cout << "\n Enter the Student Name:";
    cin >> sname;

    cout << "\n Enter the Student RollNo:";
    cin >> stdNo;

    cout << "\n Enter the Student Standard:";
    cin >> std;

    cout << "\n Enter the Student Division:";
    cin >> div;

    cout << "\n Enter the Student School Name:";
    cin >> schoolName;
}

void Student ::setData()
{
    cout << "\nStudent Name :" << sname;
    cout << "\nStd Roll No :" << stdNo;
    cout << "\nStd(Div) :" << std << "(" << div << ")";
    cout << "\nSchool Name  :" << schoolName;
}

int main()
{
    Student s;
    s.getData();
    s.setData();
    return 0;
}