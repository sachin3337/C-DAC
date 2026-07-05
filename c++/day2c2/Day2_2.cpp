#include <stdio.h>
//access specifer
struct Time
{
    // data member of struct
    private:
    int hr;
    int min;
    int sec;
  public:
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
    struct Time t1;
    t1.acceptTime();
   // t1.hr = 6;
    t1.printTime();
}
// 1.every data in c Programming is global
//we have acheive the security in c++ using access specifier
