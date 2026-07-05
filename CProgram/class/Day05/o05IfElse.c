#include<stdio.h>

//if ... else


int main()
{
    int num1=30;
    int num2=20;

    //Q. Find the largest var out of num1 and num2 ?

    // if(condition)
    // {
    //     //true part
    // }
    // else
    // {
    //     //false part
    // }
    // 10 < 20 => 1
    // 30< 20 => 0
    if(num1<num2)
    {
        //true part
        printf("\n num2 is the largest var");
    }
    else
    {
        //false part
        printf("\n num1 is the largest var");
    }
}



// #include<stdio.h>

// //if ... else


// int main()
// {
//   if(-10) //-10 => it non zero value => true
//     {
//         //true part
//         printf("\n Sunbeam Pune ");
//     }
//     else
//     {
//         //false part
//         printf("\n Sunbeam Karad");
//     }
// }




// #include<stdio.h>

// //nested if 
// int main()
// {
//     int num1=40;
//     int num2=20;
//     int num3=50;
//     //Q. Find the largest var out of num1 , num2 and num3 ?
//      //  40  > 20 => 1
//      // 10 > 20 => 0
//      // 40 > 20 => 1
//     if(num1 >  num2)
//     {
//         //nested if
//         // 40 > 30 => 1
//         // 40 > 50 => 0
//         if(num1 > num3)
//         {
//             printf("\n num1 is the largest var");
//         }
//         else
//         {
//             printf("\n num3 is the largest var");
//         }
//     }
//     else
//     {
//         //  20 > 30 =>0 
//         if(num2> num3)
//         {
//              printf("\n num2 is the largest var");
//         }
//         else
//         {
//              printf("\n num3 is the largest var");
//         }
//     }
// }





// #include<stdio.h>

// // if ... else if ... else 
// int main()
// {
//     int num1=10;
//     int num2=20;
//     int num3=30;
//     //Q. Find the largest var out of num1 , num2 and num3 (without using nested if block) ?
//      //    1        &&  1 => 1 => true
//     // 40 > 20      && 40 > 30
//      //   0       &&         => 0  
//     // 10 >  20
//     if(num1 > num2 &&  num1 > num3 )
//     {
//         printf("\n num1 is the largest var"); 
//     }      // 20 > 30 => 0
//     else if(num2 > num3)
//     {
//         printf("\n num2 is the largest var");
//     }
//     else
//     {
//         printf("\n num3 is the largest var");
//     }
// }