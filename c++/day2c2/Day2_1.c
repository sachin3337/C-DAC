// A time structure which has hr,min sec,need to operates
// acceptTime() and printTime() function to work on it
#include <stdio.h>

struct Time
{

    // data member of struct
    int hr;
    int min;
    int sec;
};
// ptr=&t1
void acceptTime(struct Time *ptr)
{
    printf("enter the value for hr,min sec");
    scanf("%d%d%d", &ptr->hr, &ptr->min, &ptr->sec);
}

void printTime(struct Time t)
{
    printf("%d : %d: %d\n", t.hr, t.min, t.sec);
}

int main()
{
    struct Time t1; // t1 is a variable of struct Time
    acceptTime(&t1);
    t1.hr = 6;
    printTime(t1);
}
//1.every data in c Programming is global
//2.we cannot write related function inside structure
//we cannot write function inside a structure