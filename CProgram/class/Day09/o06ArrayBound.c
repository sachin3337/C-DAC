#include<stdio.h>
//1 D array checking array bound
int main()
{
    int arr[]={10,20,30,40,50};
    //array size => 5
    //sizeof(arr)=> 5 *  4 => 20 byte
    //Note:- checking the array bound is job of user / programmer
    //start array bound i => 0
    //end array bound size-1 => 5-1 => 4

    // for(int i=0; i<5; i++)
    // {
    //     printf(" %d", arr[i]);
    // }
    //expected :- 10 20 30 40 50 
    //unexpected output:- 10  20 30 40 50  G  10
    //but when user or programmer give wrong array bound, result into unexpected output
    //start array bound i => 0
    //end array bound  => 7
    for(int i=0; i<7 ;i++)
    {
        printf(" %d ", arr[i]);
    }
}


// #include<stdio.h>
// //1 D array
// int main()
// {
//          //      0   1    2     3    4
//     int arr[]={ 10 , 20 , 30 , 40 , 50 };
//      //        100  104   108  112  116
//     printf("\n %d", arr[1]); //20 //arr[1]=> *(arr+1) => *(100+1*scale factor)=> *(100+4)
//     //*(104)=> 20
//     printf("\n %d", 3[arr]); //3[arr] => *(arr+3) => *(100+3*scale factor)=>*(100+3*4)
//     //*(112)=>40
//     printf("\n %d", 1[arr+1] );//*((arr+1)+1)=> *((100+1*4)+1) =>*((104)+1*4)=> *(108)=> 30
// }