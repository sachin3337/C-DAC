#include <iostream>
using namespace std;

int main()
{
    int num1 = 10;
    int *ptr = &num1;
    *ptr++;
    int &ref = num1; // ref is a reference of num1 AND num1 is referent here
    cout << "value of num1: " << num1 << endl;
    cout << "address of num1: " << &num1 << endl;
    cout << "value of ref: " << ref << endl;
    cout << "address of ref: " << &ref << endl;

    int &num2=ref;
    int &num3=num2;
    ref++;

}