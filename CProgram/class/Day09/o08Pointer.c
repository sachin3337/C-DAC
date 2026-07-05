#include<stdio.h>
//void pointer
int main()
{

    int num1=10;
    int * ptr=&num1;
    double dvar=123.23;
    double * dptr=&dvar;
    
    void * vptr;  //void pointer
    vptr=&num1;// void pointer vptr is holding an address of num1
    // printf("\n value at vptr=%d", *vptr);//not ok as you can not derefer the void pointer directly
    printf("\n value at vptr =%d", *(int *)vptr); ////ok//10 => 1. we have converted the void pointer into int pointer and then derefered
    //it
}