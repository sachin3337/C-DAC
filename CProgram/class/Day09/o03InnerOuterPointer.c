#include<stdio.h>

int main()
{
    int arr[3][3]={10,20,30, 11,22,33, 666,777,888};
       //       row[0]     row[1]       row[2]

    printf("\n row 0 col1 ele=> %d", *(*(arr+0)+1));//20 => row 0 col 1 ele
    
    //     Inner add Pointer arithmetic
    // =*(Inner add  + n* scale factor)
    // =*(100 + 1 * 4)
    // =*104=> 20 

     printf("\n row 1 col2  ele=> %d", *(*(arr+1)+2));//33 => row 1 col 2 ele
    
    //     Inner add Pointer arithmetic
    // =*(Inner add  + n* scale factor)
    // =*(112 + 2 * 4)
    // =*120=> 33
    
     printf("\n row 2 col 1  ele=> %d", *(*(arr+2)+1));//777 => row 2 col 1 ele
     //     Inner add Pointer arithmetic
    // =*(Inner add  + n* scale factor)
    // =*(124 + 1 * 4)
    // =*128=> 777
    
}