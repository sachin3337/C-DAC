#include<stdio.h>
//2-D array different declarations and intializations
int main()
{
    int arr[3][3]={10,20,30, 11,22,33, 666,777,888};
    // total ele in arr => 3*3=>9 ele * 4 => 36
    int arr1[3][3]={{10,20}, {11}, {666,777,888}};
          //        0   1 2    0  1
    int arr2[ ][3]={11,22,33, 44,55};
                  //row 0     row 1
    // int arr3[][3]; //not ok
    //int arr4 [3][ ]={11,22,33, 44,55}; // not ok 
    for(int row=0; row<3 ; row++) //3
    {
        //inner for=> col
         //           0< 3 => 1       
        for(int col=0; col<3; col++)
        {
                printf(" %d ", *(*(arr1+row)+col));
                            
        }
        printf("\n");
    }
    printf("\n size of arr=%d", sizeof(arr));  // total ele in arr => 3*3=>9 ele * 4 => 36
    printf("\n size of arr2=%d", sizeof(arr2));  // total ele in arr => 2*3=>6ele * 4 => 24
   
}