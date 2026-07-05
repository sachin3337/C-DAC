#include<stdio.h>
#pragma pack(1)   //Do NOT add extra padding bytes in structures. Pack everything tightly (1-byte alignment).
// array of structure

struct student
{
    //body of struct
    //elements or members of structure
    int rollNo; //4 //element of struct student
    char sec; //1 //element of struct student
    double per; // 8 //element of struct student
};//end of struct student

int main()
{                //        rollNo, sec, per      rollNo, sec,  per     rollNo, sec, per
    struct student sarr[3]={101    ,'A', 92.23,   102 , 'B'  , 87.45,   104  , 'C' , 97.23 };
                   //          std1 info=>[0]     std2 info=>[1]        std3 info => [2]

    printf("\n student 1 per =%.2lf",sarr[0].per );//92.23    
    printf("\n student 2 rollNo =%d",sarr[1].rollNo );//102    
    printf("\n student 3 sec =%c",sarr[2].sec );//'C'         
   
    for(int i=0; i < 3; i++ )
    {
        printf("\n====Students Info====\n");
        printf("\n student rollNo =%d",sarr[i].rollNo );
        printf("\n student sec =%c",sarr[i].sec );
        printf("\n student per =%.2lf",sarr[i].per );
    }
}