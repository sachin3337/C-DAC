#include <stdio.h>

int main (){
    int num1 = 10;
    int * ptr = &num1;

    int ** pptr = &ptr;

    int ***ppptr = &pptr;
    printf("Value of Ptr id => %d \n", *ptr);
    printf("Value of PPtr id => %d \n", **pptr);
    printf("Value of PPPtr id => %d \n", ***ppptr);
}