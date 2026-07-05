#include <iostream>
using namespace std;
//constructor
class BankAccount
{
    int accno;
    int mobileNo;
    double balance;

public:
    // constructor overloading
    //  paramterless constructor
    BankAccount()
    {
        cout << "paramterless ctor gets called" << endl;
    }
    // paramterised constructor
    BankAccount(int acc, int mobno, double bal)
    {
        cout << "para ctor gets called" << endl;
        accno = acc;
        mobileNo = mobno;
        balance = bal;
    }

    void PrintDetails()
    {
        cout << "AccountNumber " << this->accno << endl;
        cout << "MobileNumber " << this->mobileNo << endl;
        cout << "Balance " << this->balance << endl;
    }
};

int main()
{
    BankAccount b1(1001, 3456, 3000); //
    // b1.BankAccount();
    b1.PrintDetails();
}
