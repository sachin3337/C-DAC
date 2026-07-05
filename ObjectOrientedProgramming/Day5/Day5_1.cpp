#include <iostream>
using namespace std;
// bad_allocation

int main1()
{
    // int using new
    int *ptr = new int; // garbage value
    cout << "value of  ptr  " << *ptr << endl;
    delete ptr;
    ptr = NULL;
    int *ptr1 = new int(); //() use the default value of data type
    cout << "value of ptr1 " << *ptr1 << endl;
    delete ptr1;
    ptr1 = NULL;

    int *ptr2 = new int(10); //() use the default value of data type
    cout << "value of ptr2 " << *ptr2 << endl;
    // *ptr2=10;
    delete ptr2;
    ptr2 = NULL;
}

int main()
{
    // int using new  fail=> bad_allocations
    //malloc fails =>null
    int *ptr = new int[1000000000000L];
    delete ptr;
    ptr = NULL;
    return 0;
}
