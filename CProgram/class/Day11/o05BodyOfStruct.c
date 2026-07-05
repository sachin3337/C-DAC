#include<stdio.h>
#pragma pack(1)

struct student
{
    //body of struct
    //elements or members of structure
    int rollNo; //4 //element of struct student
    char sec; //1 //element of struct student
    double per; // 8 //element of struct student
}std1={102, 'B' , 97.23};//end of struct student
//std1 is variable of struct student
int main()
{
    // struct student std1={101,'A', 92.23}; 
    printf("\n Roll no=%d",std1.rollNo);
    printf("\n Sec=%c",std1.sec);
    printf("\n per=%.2lf",std1.per);

}