#include <iostream>
using namespace std;
//association=>aggregation
class Date
{
    int day;
    int month;
    int year;

public:
    Date(int day = 0, int month = 0, int year = 0)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void printDetails()
    {
        cout << " " << day << "/ " << month << " / " << year << endl;
    }
};
class Employee
{

    int empid;
    Date *JoinDate;

public:
    Employee(int empid, Date joinDate)
    {
        this->empid = empid;
        this->JoinDate = &joinDate;
    }

    void printdetails()
    {
        cout << "empid: " << empid << endl;
        JoinDate->printDetails();
    }
};

int main()
{
    Date d(2, 3, 2026);
    Employee e(10, d);
    e.printdetails();
}