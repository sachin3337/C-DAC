#include <iostream>
using namespace std;

class Test
{
    int num1;

public:
    Test()
    {
        cout << "ctor gets called" << endl;
    }
};
int main()
{
    //  Test t1; // stack
    // creating object on heap using malloc
    // Test *t2 = (Test *)malloc(sizeof(Test));//cannot give call to ctor
    // free(t2);
    // t2 = NULL;
    Test *t3 = new Test;//ctor gets called here
    delete t3;
    t3 = NULL;

    return 0;
}

int main1()
{
    // dynamic allocation for 1 int using malloc
    int *ptr = (int *)malloc(sizeof(int));
    cout << "ptr " << *ptr << endl;

    free(ptr);  // to avoid memory leakage
    ptr = NULL; // to avoid dangling pointer

    // dynamic allocation for 1 int using new
    int *ptr1 = new int;
    *ptr1 = 300;
    cout << "ptr1 " << *ptr1 << endl;

    delete ptr1; /// free(ptr1) //to avod memory leakage
    ptr1 = NULL; // to avoid dangling pointer

    int *ptr2 = new int(); // ptr2=0 integral data type by default 0

    cout << "ptr2" << *ptr2 << endl;
    delete ptr2;
    ptr2 = NULL;

    // dynamic allocation for 3 int using malloc
    int *ptr3 = (int *)malloc(sizeof(int) * 3);
    ptr3[0] = 10;
    ptr3[1] = 20;
    ptr3[2] = 30;
    free(ptr3);
    ptr3 = NULL;

    // dyanmic allocation using new
    int *ptr4 = new int[3];
    ptr4[0] = 10;
    ptr4[1] = 20;
    ptr4[2] = 30;
    delete[] ptr4;
    ptr4 = NULL;
}