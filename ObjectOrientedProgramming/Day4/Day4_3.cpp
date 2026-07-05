#include <iostream>
using namespace std;

class BankAccount
{
    int accno;
    int mobileNo;
    double balance;

public:
    BankAccount(int accno, double balance)
    {
        cout << "para ctor called " << endl;
        this->accno = accno;
        this->mobileNo = 0;
        this->balance = balance;
    }

    void printDetails()
    {
        cout << "AccoNumber: " << accno << endl;
        cout << "MobileNumber: " << mobileNo << endl;
        cout << "balance: " << balance << endl;
    }

    // mutator//setter
    void setMobileNo(int mobno)
    {
        mobileNo = mobno;
    }
    // insepctor//getter
    int getMobileNo()
    {
        return this->mobileNo;
    }
};

int main()
{

    BankAccount b3(1001, 6700); // mob=0  =>mob=7890  //address 4000

    b3.printDetails();
    // cout << "..........." << endl;
    b3.setMobileNo(7890);
    int mobileNo = b3.getMobileNo();
    cout << "your mobileNumber: " << mobileNo;
}
