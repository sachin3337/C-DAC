#include <iostream>
using namespace std;
//constructor
class BankAccount
{
    int accno;
    int mobileNo;
    double balance;

public:
    // void acceptDetails()
    // {
    //     cout << "Enter the acountNumber: " << endl;
    //     cin >> accno;
    //     cout << "Enter the Mobile: " << endl;
    //     cin >> mobileNo;
    //     cout << "Enter the Balance: " << endl;
    //     cin >> balance;
    // }
    void PrintDetails()
    {
        cout << "AccountNumber " << this->accno << endl;
        cout << "MobileNumber " << this->mobileNo << endl;
        cout << "Balance " << this->balance << endl;
    }
};

int main()
{
    BankAccount b1;
   // b1.acceptDetails();
    b1.PrintDetails();
    cout << "  " << endl;
    //b1.acceptDetails();
    b1.PrintDetails();
}
