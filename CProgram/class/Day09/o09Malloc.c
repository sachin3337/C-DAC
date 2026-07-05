#include<stdio.h>
#include<stdlib.h>
//dynamic memory allocation:- allocating the memory during program is executing
//malloc()
int main()
{
    int * ptr=(int *) malloc(5* sizeof(int)); // 5*4=> 20 byte dynamic memory will be allocated in heap section
    //of process of program and the memory will be initialized with garbage value, 
    // and as address of dynamic block / dynamic memory will be returned in the form of
    //void pointer (we need to type case void pointer into respective type).

    for(int i=0; i<5 ;i++)
    {
        printf(" %d ", ptr[i]); //garbage value
    }

    ptr[0]=10; // *(ptr+0)=10;
    ptr[1]=20; // *(ptr+1)=20;
    ptr[2]=30; // *(ptr+2)=30;
    ptr[3]=40; // *(ptr+3)=40;
    ptr[4]=50; // *(ptr+4)=50;
    printf("\n=====After Modification======= \n");
    for(int i=0; i<5 ;i++)
    {
        printf(" %d ", ptr[i]); //garbage value
    }

    //Note:- when we are perfirming the dynamic memory allocation then it is job of programmer to
    // deallocate the memeory
    free(ptr); //it deallocated the dynmic memory
    //when we perform the dynamic memory alocation and do not perfom the deaalcation
    //in sych case the memory leackage will takes place
}