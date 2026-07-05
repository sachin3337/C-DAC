// A time structure which has hr,min sec,need to operates
// acceptTime() and printTime() function to work on it
#include <stdio.h>

struct Time
{

    // data member of struct
    int hr;
    int min;
    int sec;

    // member function
    void acceptTime()
    {
        printf("enter the value for hr,min sec");
        scanf("%d%d%d", &hr, &min, &sec);
    }

    void printTime()
    {
        printf("%d : %d: %d\n", hr, min, sec);
    }
};

int main()
{
    struct Time t1;  // t1 is a variable of struct Time
    t1.acceptTime(); // message passing
    t1.hr = 6;
    t1.printTime();
}
// 1.every data in c Programming is global
// 2.we can write related function inside structure
// solution:- we can write function inside a structure