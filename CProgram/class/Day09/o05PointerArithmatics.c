#include<stdio.h>
//2 d array pointer arithmetic
int main()
{
    int arr[3][3]={10,20,30, 11,22,33, 666,777,888};
       //       row[0]     row[1]       row[2]
    // total ele => 3* 3=> 9
    printf("\n arr=%u", arr);//100 // outer add of row 0
     printf("\n arr+1=%u \n", arr+1); //112
     /*
        row level outer address
        =outer add+ n * (scale factor* no. of cal)
        =100+1 *(4*3)
        =112 
     */
    printf("\n value at arrr=%u", *arr);//100 // inner address of row 0
     printf("\n value at arrr+1=%u \n", *(arr)+1);
     /*
        inner address  pointer arithmetic
        =inner add+ n * scale factor
        =100+1 * 4
        =104
     */
    printf("\n &arrr=%u", &arr); //100 => block level outer address
     printf("\n &arrr+1=%u", &arr+1);//&arr+1 => block len=vel jump
     /*
         block level outer address arithmetic
         =block level outer address + n *(scale factor * total no. ele)
         =100 + 1*(4*9)
         =136
     
     */

}