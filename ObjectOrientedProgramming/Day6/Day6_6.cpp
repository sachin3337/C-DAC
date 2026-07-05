#include <iostream>
using namespace std;
//static
class Test
{
    int x;            // instance varible
    static int count; // static variable //classlevel variable

public:
    Test()
    {
        this->x = 10;
        // this->count = 1;
    }
    void printCount()
    {
        cout << "x: " << x << endl;
        cout << "count: " << count << endl;
    }
    static int getCount()
    {
        //cout << "x: " << this->x << endl;
        cout << "count: " << count << endl;
    }
};
int Test::count = 1;

int main()
{
    Test t1;
    //t1.printCount(); t1.printCount(&t1)
    Test::getCount();
}