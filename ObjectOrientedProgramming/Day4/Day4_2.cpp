#include <iostream>
using namespace std;

class BankAccount
{
    int accno;
    int mobileNo;
    double balance;

public:
    BankAccount(int ac = 0, int mobno = 0, double bal = 0)
    {
        cout << "para ctor called " << endl;
        accno = ac;
        mobileNo = mobno;
        balance = bal;
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

    BankAccount b2;
    BankAccount b3(1001, 3455, 6700);
    BankAccount b4(1001);
    BankAccount b5(1001, 2345);
    // BankAccount b6(,678,);
    b3.printDetails();
    b2.printDetails();
}
