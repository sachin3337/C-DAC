#include <iostream>
using namespace std;
//virtual
class Base // polymorphic class
{

    int num1;

public:
    virtual void f1()
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
    //function overriding
    void f1() override
    {
        cout << "Derived::f1()" << endl;
    }
};

int main()
{
    Base *b = new Derived;
    b->f1();  //late binding  call resolved at runtime
}
