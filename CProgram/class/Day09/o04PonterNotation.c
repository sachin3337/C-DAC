#include<stdio.h>
//  2 D array Pointer notation
int main()
{
    int arr[3][3]={10,20,30, 11,22,33, 666,777,888};
       //       row[0]     row[1]       row[2]

    // Q. Access and print the 2-D array elemnts using Pointer notaion and nested for loop?

    // *(*(arrayName+rowIndex)+colIndex)
    // outer for => row
     //           3< 3 => 0
    for(int row=0; row<3 ; row++) //3
    {
        //inner for=> col
         //           0< 3 => 1       
        for(int col=0; col<3; col++)
        {
                printf(" %d ", *(*(arr+row)+col));
                            //row 0 
                            // *(*(100+0)+0)=> 10
                             // *(*(100+0)+1)=> 20
                             // *(*(100+0)+2)=> 30

                             //row 1
                             // *(*(100+1)+0)=> 11
                             // *(*(100+1)+1)=> 22
                             // *(*(100+1)+2)=> 33

                            //row 2
                            // *(*(100+2)+0)=> 666
                             // *(*(100+2)+1)=> 777
                             // *(*(100+2)+2)=> 888
        }
        printf("\n");
    }
}
