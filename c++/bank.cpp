#include <iostream>
using namespace std;

// cpp menu driven program  of bank to deposite amount,widthdrow amount and show balance using class and counstructor


class Bank
{
    int balance;

public:
    Bank(int);
    void display()
    {
        cout << " Balance = " << balance;
    }
};

Bank :: Bank (int bal){
    balance = bal;
}

int main(){

    Bank b1(1000);
    Bank b2 = Bank(200);

    cout << "\nObject 1 : "<< "\n";
    b1.display();
    
    cout << "\nObject 2 : "<< "\n";
    b2.display();

    return 0;
}