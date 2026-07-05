#include <iostream>
using namespace std;

class BankAccount
{
    int accno;
    int mobileNo;
    double balance;

public:
    BankAccount(int accno, int mobileNo, double balance)
    {
        cout << "para ctor called " << this << endl;
        this->accno = accno;
        this->mobileNo = mobileNo;
        this->balance = balance;
    }

    void printDetails()
    {
        cout << "AccoNumber: " << accno << endl;
        cout << "MobileNumber: " << mobileNo << endl;
        cout << "balance: " << balance << endl;
    }

    ~BankAccount()
    {
        cout << "destructor gets called" << this << endl;
    }
};

int main()
{
    BankAccount b1(1001, 4567, 7890);
    BankAccount b2(1002, 4568, 7890);
    BankAccount b3(1003, 4569, 7890);
    // b1.printDetails();
}
