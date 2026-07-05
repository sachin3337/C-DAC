#include<stdio.h>
//bit field
typedef struct
{
        char name[20]; 
        int rn:5;////bit field    
        int marks:5;////bit field 
}STUDENT;

int main()
{
   STUDENT s1={"Om" , 8, 7};
   printf("\n name=%s", s1.name);
   printf("\n roll no=%d", s1.rn);
   printf("\n marks=%d", s1.marks);
   
//    printf("address of bit filed rn=%d" , &s1.rn);//not ok //taking the address of a bit field is not allowed
//    printf("address of bit filed marks=%d" , &s1.marks);//not ok //taking the address of a bit field is not allowed
}

