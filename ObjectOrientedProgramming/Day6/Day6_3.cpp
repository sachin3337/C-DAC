#include <iostream>
using namespace std;
//object slicing_upcasting
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
    //when parent pointer holds the address of child
    //when base class pointer holds the address of derived class  
    Base *b=new Derived;//upcasting
    b->f1();  //early binding
    //b->f2();//object slicing
    //do a downcasting
    Derived *d=(Derived*)b; 
    d->f1();
    d->f2();  



}
int main1()
{
    Derived *d = new Derived;
    d->f1();
    d->f2();
}