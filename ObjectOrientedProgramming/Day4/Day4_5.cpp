#include <iostream>
using namespace std;
//constructor intilizer list follow the order of data member
//useful for constant and reference
class Test
{
    int num1;
    int num2;
    int num3;

public:
    Test() : num3(num2), num2(num1), num1(0)
    {
        // this->num3 = num2;//G
        // this->num2 = num1;//G
        // this->num1 = 0;  //0
    }
    void printDetails()
    {
        cout << "Num1: " << num1 << endl;
        cout << "Num2 " << num2 << endl;
        cout << "Num3: " << num3 << endl;
    }
};

int main()
{
    Test t1;
    t1.printDetails(); // 0 0 0
}