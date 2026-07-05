#include<stdio.h>
#pragma pack(1)


typedef struct student
{
    //body of struct
    //elements or members of structure
    int rollNo; //4 //element of struct student
    char sec; //1 //element of struct student
    double per; // 8 //element of struct student
}std;//end of struct student
//std is now nick name (some other name) given to the structure student
//std is not a varible of struct student here
int main()
{
    // struct student std1;
    std std1={109, 'C', 97.23};//std1 is struct students var declared using typedef(nick name) of struct
    
    //student std 
    printf("\n rollNo=%d", std1.rollNo);
    printf("\n sec=%c", std1.sec);
    printf("\n per=%.2lf", std1.per);


}