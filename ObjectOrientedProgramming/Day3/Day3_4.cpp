// class
#include <iostream>
using namespace std;

// TIme class=> three data members and two member functions
//concrete class //if you create a object from that class 
class Time
{
    // data member
    int hr;
    int min;
    int sec;

    // member functions
public:
  //concrete method
    void acceptTime()
    {
        cout << "enter the value for hr: " << endl;
        cin >> hr;
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
    Time t1; // object of Time class
    Time t2; // t2 is an object of Time class
    cout << "size of Time T2  " << sizeof(t2) << endl;
    // t1.acceptTime(); // message passing
    // t1.printTime();
}
