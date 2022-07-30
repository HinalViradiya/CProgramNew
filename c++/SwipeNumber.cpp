//Cpp program to swape two number using class

#include<iostream>
using namespace std;
class Swipe{
    int n1,n2;  
                                                                            //attribute
    public :   //access specifier
    Swipe(int i,int j){
        n1=i;n2=j;
    }   
    void display()                                                          //attribute
    {
        cout<< "\n N1 :"<<n1<<"\n N2 :"<<n2;
    }
    void swipeNumber()                                                      //attribute
    {
        n1= n1+n2;  // 30
        n2= n1-n2;  // 20
        n1= n1-n2;  // 10   
    }
};


int main(){
    Swipe s1(45,90);
    s1.display();

    s1.swipeNumber();
    cout<<"\nAfter Swipe the Number :";
    s1.display();

    return 0;
}