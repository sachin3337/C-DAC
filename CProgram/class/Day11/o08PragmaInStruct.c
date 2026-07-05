#include<stdio.h>
#pragma pack(1)

struct student
{
    //body pf struct 
    int rollNo;//4 //elements of struct
    char sec;//1 //elements of struct
    double per; //8 //elements of struct
}; // end of struct
//sizeof struct student=4=1+8 => 13 byte
int main()
{
    printf("\n size of struct student=%d", sizeof(struct student)); //16 => when #pragma pack(1) is not ginen
                                                                    //13 => when #pragma pack(1) is ginen
}