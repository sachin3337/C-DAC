#include <iostream>
using namespace std;
//shadowing
class Base
{

    int num1;

public:
    void f1()
    {
        cout << "Base::f1()" << endl;
    }
};

class Derived : public Base
{
    int num2;
    // int num1;

public:
    // void f1()
    // {
    //     cout<<"Base::f1()"<<endl;
    // }
    void f2()
    {

        cout << "Derived::f2()" << endl;
    }

    void f1()
    {
        cout << "Derived::f1" << endl;
    }
};

int main()
{
    Derived d1;
    d1.f1();
}