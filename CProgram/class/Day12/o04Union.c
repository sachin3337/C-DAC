#include<stdio.h>
//Union
union student
{
    //body of union
    int rollNo; //4 byte //element of union
    char sec; //1 byte //element of union
    double per; //8 byte //element of union

};//end of union

//Note:- 1. All elemts of union will share the same memory to stodre their value.
        //  2. Size of union = Size of largest element (8 byte in above the stydent union)
int main()
{
    printf("\n sizeof union student =%d", sizeof(union student)); //8 byte
    union student s1={65}; //variable of union
    printf("\n rollNo=%d", s1.rollNo);
    printf("\n sec =%c", s1.sec); // 65 is ASCII of 'A'
    printf("\n per =%d", s1.per); // 65
    
    s1.sec=66; //66 ASCII value of 'B'
    printf("\n sec =%c", s1.sec); // 'B'
    printf("\n rollNo=%d", s1.rollNo); //66
    printf("\n per =%d", s1.per); // 66
}
