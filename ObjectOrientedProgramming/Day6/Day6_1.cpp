#include<iostream>
using namespace std;
//basic inheritance
class Base{

    int num1;
public:
    void f1()
    {
        cout<<"Base::f1()"<<endl;
    }
};

class Derived:public Base{
    int num2;
   // int num1;

    public:
    // void f1()
    // {
    //     cout<<"Base::f1()"<<endl;
    // }
    void f2()
    {
        //cout<<num1<<endl;
        cout<<"Derived::f2()"<<endl;
    }

};

int main()
{
    Base b1;
    b1.f1();
    Derived d1;
    d1.f1();
    d1.f2();
    
}