#include <iostream>
using namespace std;

// void swap(int num1, int num2)
// {
//     int temp = num1;
//     num1 = num2;
//     num2 = temp;
//     cout << "before swap " << "num1: " << num1 << " num2: " << num2 << endl;
// }
void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    cout << "before swap " << "num1: " << ptr1 << " num2: " << ptr2 << endl;
}
void swap(int &num1, int &num2) // int&num1=a  int&num2=b
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "before swap " << "num1: " << num1 << " num2: " << num2 << endl;
}

int main()
{

    int a = 10;
    int b = 20;
    cout << "before swap " << "a: " << a << " b: " << b << endl;
    // swap(a, b); // pass by value
    // swap(&a, &b); //pass by address
    swap(a, b); // pass by reference
    cout << "before swap " << "a: " << a << " b: " << b << endl;
}
