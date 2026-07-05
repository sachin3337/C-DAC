#include<stdio.h>
#include<stdlib.h>
//realloc():- used to resize(grow or shrink) the dynamic memory

int main()
{
    int * ptr= (int *)malloc(5*sizeof(int));// 20 byte dynamic memory allocation in heap section
    ptr[0]=10;
    ptr[1]=20;
    ptr[2]=30;
    ptr[3]=40;
    ptr[4]=50;
    for(int i=0; i< 5 ;i++)
    {
        printf(" %d ", ptr[i]);
    }

    // Q. Resize above the dynamic array or dynamic block by 8 bytes 
    //realloc(baseAddOfDynamicBlock, finalNoOfByte after grow or shrink);
    ptr= (int  *) realloc(ptr, 7* sizeof(int));
    ptr[5]=120;
    ptr[6]=180;
    printf("\n===== After resize =====\n");

    for(int i=0; i< 7 ;i++)
    {
        printf(" %d ", ptr[i]);
    }
}