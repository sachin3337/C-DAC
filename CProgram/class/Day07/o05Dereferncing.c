#include<stdio.h>
//dereferencing 
int main()
{
    int num1 =10;
    int * ptr=&num1;
    char ch='A';
    char * cptr= &ch;  
    double dvar=123.23; 
    double * dptr= &dvar;

    printf("\n value at ptr=%d", *ptr); //10
    printf("\n value at cptr=%c", *cptr);//'A'
    printf("\n value at dptr=%.2lf", *dptr); // 123.23

    printf("\n size of ptr =%d", sizeof(ptr)); //4
    printf("\n size of cptr =%d", sizeof(cptr)); //4
    printf("\n size of dptr =%d", sizeof(dptr)); //4
    //Size of pointer variable is 4 byte in 32-bit compiler ,it is irrespective of pointer variable's data type
    //and
    //Size of pointer variable is 8 byte in 64-bit compiler, it is irrespective of pointer variable's data type
     
}