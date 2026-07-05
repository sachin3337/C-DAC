#include<iostream>
using namespace std;

int main()
{
    int num1=10;
    int* ptr=&num1;
    *ptr=30;
    int num2=40;
    ptr=&num2;

    int *const ptr1=&num1;
    //ptr1=&num2;
    *ptr1=40;

    const int* ptr2=&num1;
    //*ptr2=30;
    ptr2=&num2;
    const int num4=10;
    num4=50;//error cant modifiable
}