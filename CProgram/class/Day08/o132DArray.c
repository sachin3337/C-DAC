#include<stdio.h>

int main()
{
    //Q. Print the 2 D array using nested for loop ?

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

    //outer for => row
     //           3<3 => 0
    for(int row=0; row<3 ; row++) //0+1 => 1+1=> 2 +1 => 3
    {

        //inner for => col
        //                0< 3=>0
        for(int col= 0;  col<3 ; col++ ) //0 +1 =>1+1=> 2 +1 =>3
        {
            printf(" %d ", arr[row][col]);
                        //row[0] =>
                         //arr[0][0] => 60 
                         //arr[0][1] =>  70
                        //arr[0][2] =>  90

                        //row[1]=>
                        //arr[1][0] => 65
                         //arr[1][1] =>55
                        //arr[1][2] => 75

                         //row[2]=>
                        //arr[2][0] => 90
                         //arr[2][1] =>68
                        //arr[1][2] => 85


        }
        printf("\n");
    }

}