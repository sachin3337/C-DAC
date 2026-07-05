#include<stdio.h>
#pragma pack(1)

//Nested structure
struct student
{
    //body of struct
    //elements or members of structure
    int rollNo; //4 //element of struct student
    char sec; //1 //element of struct student
    double per; // 8 //element of struct student
    //dob => date of birth(dd-mm-yy) // 15/5/2000
    //date is nested structure 
    struct date{
        int dd; // elements of nested structure
        int mm; // elements of nested structure
        int yy; // elements of nested structure
    }dob; 
    // Note:- 1. dob is variable of struct date
    //        2. also dob is elemnt of struct sturent
    //Note:- in case of nested structure you can not mention the typedef with nested struct.
};

int main()
{              //        rollNo sec   per   dob(date of birth)
          //                                dd,  mm, yy
    struct student std ={ 109 , 'C', 87.34, {15 ,5, 2000} }; 
    struct student* ptr=&std;
    printf("\n rollNo=%d", std.rollNo);
    printf("\n sec=%c", std.sec);
    printf("\n per=%.2lf", std.per);
    //Q. how to access the elements of nested structure ?
    // ans:- 
    printf("\n date of birth of student=%d-%d-%d", std.dob.dd, std.dob.mm, std.dob.yy );
    //accessed the elemnts of nested structure

    // ptr->per;
    // ptr->rollNo;
    // ptr->sec;
    // ptr->dob.dd;
    // ptr->dob.mm;
    // ptr->dob.yy;
}