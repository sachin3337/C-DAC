#include <iostream>
using namespace std;

class BankAccount
{
    const int accno; // const data member
    int mobileNo;
    double balance;
    mutable int count;

public:
    BankAccount(int accno = 0, int mobileNo = 0, double balance = 0) : accno(accno)
    {
        cout << "para ctor called " << this << endl;
        // this->accno = accno;
        this->mobileNo = mobileNo;
        this->balance = balance;
        this->count = 0;
    }

    // const function
    void printDetails() const
    {
        // this->accno++;
        // this->mobileNo++;
        this->count++;
        cout << "AccoNumber: " << accno << endl;
        cout << "MobileNumber: " << mobileNo << endl;
        cout << "balance: " << balance << endl;
    }
    void setMobileNo(int mobno)
    {
        mobileNo = mobno;
    }
    int getCount()
    {
        return count;
    }
};

// const object
int main()
{
    BankAccount b1;
    b1.getCount();
    b1.setMobileNo(6789);
    b1.printDetails();

    const BankAccount b2(1001, 3456, 7890);
    b2.printDetails();
    //b2.setMobileNo(6790);
}

// const function and mutable
int main1()
{
    BankAccount b1(1001, 3456, 5000);
    b1.printDetails();
    BankAccount b2(1002, 3456, 5000);
    b2.printDetails();
    b1.printDetails();
    // int count=b1.getCount();
    cout << "count: " << b1.getCount();
}
