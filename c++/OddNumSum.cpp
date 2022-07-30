// write a program to find odd number between 1 to 100 using class

#include <iostream>
using namespace std;

class series
{
private:
    int n1, n2;

public:
    void getData(){
        cout<<"Enter the 1st Number :";
        cin>> n1;
        
        cout<<"Enter the 2nd Number :";
        cin>> n2;

    }
    void findOddNumber(){       
    cout<<"\nOdd number from "<<n1 <<" To "<<n2<<" :: ";
    for(int i=n1;i<n2;i++){
          if(i%2 != 0)
          {
            cout<<i<<" ";
          }
    }
    }
};


int main(){
    series s;
    s.getData();
    s.findOddNumber();
    return 0;
}
