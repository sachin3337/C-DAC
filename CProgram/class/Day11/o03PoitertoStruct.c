#include<stdio.h>
#pragma pack(1)
//pointer to struct
struct student
{
    //body of struct
    //elements or members of structure
    int rollNo; //4 //element of struct student
    char sec; //1 //element of struct student
    double per; // 8 //element of struct student
};//end of struct student


int main()
{
    // int num1=10;
    // int * ptr=&num1;
    struct student std1={101, 'A', 92.23}; // variable of struct student 
    struct student * ptr=&std1; //pointer to the struct => here ptr is pointer to the struct
    //holding an address of variable of struct student.

    //Q. How to access an elemnt of struct student using pointer to struct ?
    //Ans:- pointerToStruct->elementName;
    printf("\n rollNo=%d", ptr->rollNo);
    printf("\n sec=%c", ptr->sec );
    printf("\n per=%.2lf", ptr->per);
}