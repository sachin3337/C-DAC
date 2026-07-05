#include<stdio.h>
#include<stdlib.h>
//dangling pointer
int main()
{
    int * ptr=(int *) malloc(5* sizeof(int));
    ptr[0]=10; // *(ptr+0)=10;
    ptr[1]=20; // *(ptr+1)=20;
    ptr[2]=30; // *(ptr+2)=30;
    ptr[3]=40; // *(ptr+3)=40;
    ptr[4]=50; // *(ptr+4)=50;
    printf("\n=====After Modification======= \n");
    for(int i=0; i<5 ;i++)
    {
        printf(" %d ", ptr[i]); 
    }
    free(ptr); //to avoide the memory leakage deallocate the dynaic memeory
    // Note:- ptr is such a pointer which is holding an address of deallocated dynamic memory.
    // which is called as dangling pointer.
    // solution to the dangling pointer is assign the NULL into the pointer
    // ptr=NULL;
}