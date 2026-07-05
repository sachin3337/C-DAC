#include<stdio.h>

int main()
{
      //Q. Store the 3  studets marks info for 3 sub into the 2 d array ?

       //         col[0] col[1] col[2]   0  1  2      0  1  2
        int arr[3] [3]={{ 60,  70  ,   90 }, {65, 55, 75} ,{90, 68, 85} };//declaring 2 d array
         //        row[0]             row[1]       row[2]
        // total ele of 3 by 3 array are => 3*3 => 9

        
        /*
                    //Accessing the 2 D array with Array notaion
             //         col[0] col[1] col[2]   0  1  2      0   1    2
        int arr[3] [3]={{ 60,  70  ,   90 }, {65, 55, 75} ,{90, 68, 85} };//declaring 2 d array
              //            row[0]             row[1]       row[2]
              

                        col[0]   col[1]     col[2]  
            row[0]        60      70         90

            row[1]         65     55         75

            row[2]        90       68        85
        */

        printf("\n arr[0][2]=>%d",arr[0][2] ); //90
        printf("\n arr[1][0]=>%d",arr[1][0] ); //65
        printf("\n arr[2][1]=>%d",arr[2][1] ); //68
       

}