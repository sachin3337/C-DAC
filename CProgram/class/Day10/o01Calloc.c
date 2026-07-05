#include<stdio.h>
#include<stdlib.h>
//dynamic memory allocation
//calloc
int main()
{
              //  4
    int * ptr=(int *)calloc(5, sizeof(int));// 5 * 4 => 20 byte dynamic memory will be allocated in heap section
    //and dynamic memory will be initialized with value zero(0) and the base address of dynamic 
    //memory will be returned as void pointer and we need to typecast it into (int * ) pointer
    //and store it in to to int pointer

    for(int i=0; i<5; i++)
    {

        printf(" %d", ptr[i]); // 0 0 0 0 0
    }

        ptr[0]=10;
        ptr[1]=20;
        ptr[2]=30;
        ptr[3]=40;
        ptr[4]=50;
    printf("\n====After Modification ======\n");   
    for(int i=0; i<5; i++)
    {

        printf(" %d", ptr[i]); // 10 20 30 40 50
    }


}