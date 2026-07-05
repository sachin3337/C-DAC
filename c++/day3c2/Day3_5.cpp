// class
#include <iostream>
using namespace std;
// this pointer
class Time
{
    int hr;
    int min;
    int sec;

public:
    //
    // Time* const  this=&t1
    void acceptTime()
    {
        cout << "enter the value for hr: " << endl;
        cin >> this->hr;
        cout << "enter the value for min: " << endl;
        cin >> min;
        cout << "enter the value for sec: " << endl;
        cin >> sec;
    }

    void printTime()
    {
        cout << "Time:- " << hr << " : " << min << " : " << sec << endl;
    }
};

int main()
{
    Time t1;
    t1.acceptTime(); // t1.acceptTime(&t1);
}
