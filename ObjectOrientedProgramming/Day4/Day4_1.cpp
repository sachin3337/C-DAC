#include <iostream>
using namespace std;

class BankAccount
{
    int accno;
    int mobileNo;
    double balance;

public:
    BankAccount(int ac, int mobno, double bal)
    {
        cout << "para ctor called " << endl;
        accno = ac;
        mobileNo = mobno;
        balance = bal;
    }
    // // userdefined default ctor/paramterless
    BankAccount()
    {
        cout << "default ctor called " << endl;
        accno = 0;
        mobileNo = 0;
        balance = 0;
    }

    void printDetails()
    {
        cout << "AccoNumber: " << accno << endl;
        cout << "MobileNumber: " << mobileNo << endl;
        cout << "balance: " << balance << endl;
    }
};

int main()
{
    // BankAccount b1;//compiler providing the default ctor/paramterless
    BankAccount b2;
    BankAccount b3(1001, 3455, 6700);
    b3.printDetails();
    b2.printDetails();
}
