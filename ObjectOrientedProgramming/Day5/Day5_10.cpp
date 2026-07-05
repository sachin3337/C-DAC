#include <iostream>
using namespace std;
// protected data member
class Base
{
private:
    int num1;

protected:
    int num2;

public:
    int num3;
};

class Derived : public Base
{
    public:
    int num4;

    void printnumbers()
    {
        cout << "num4 " << num4 << num1 << num2 << num3 << endl;
    }
};

class other
{
    void printnumbers()
    {
        Derived d1;
        cout << "num4 " << d1.num4 << d1.num1 << d1.num2 << d1.num3 << endl;
    }
}

int
main()
{
    Derived d1;
    d1.num3;
}