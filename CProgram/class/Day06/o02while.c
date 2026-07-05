#include<stdio.h>
//while
int main()
{
    //Q. Print the message Hello Students and Hello Sunbeam 5 times ?
    //1. Initialization of loop var
    int i= 0; 
    //2. we need check the termination condition (10 time)
    while(i<100)
    {
        //3. body of while loop(logic)    
        printf("\n Hello Students");
        printf("\n Hello Sunbeam\n");
        //4. modification of loop var
        i++;
    } 
}









// #include<stdio.h>
// //while
// int main()
// {
//     //Q. Print the table of 2 using loop ?
//     /*
//           Paper work
//           2 * 1 => 2
//           2 * 2 => 4
//           2 * 3 => 6
//           .
//           .
//           .
//           2 * 9 => 18
//           2 * 10 => 20

//    general expression=> 2 * i 
//         i => is loop variable
//         start range i =1  and end i=10
//     */
//      //1. Initialization of loop var
//     int i= 1; 
//     //2. we need check the termination condition (10 time)
//     while(i<=10) //1<=10 => 1 // 2<=10=> 1// 3<=10=>1. . . . . 10<=10=>1 //11<=10 =>0
//     {
//         //3. body of while loop(logic)    
//         printf("\n %d", 2 * i);
//                //       2* 1=> 2
//                //       2* 2=> 4
//                //       2* 3=> 6
//                //..
//                //       2* 10=> 20
//         //4. modification of loop var
//         i++; //1+1 => 2+1 => 3 +1 => 4 ....10 +1=> 11
//     } 
// }




// #include<stdio.h>
//while
// int main()
// {
//      //1. Initialization of loop var
//     int i= 1; 
//     //2. we need check the termination condition (10 time)
//     //infinite loop
//     while(i<=10) //1<=10 => 1 // 1<=10=> 1// 3<=10=>1. . . . . 1<=10=>1 //1<=10 =>1
//     {
//         //3. body of while loop(logic)    
//         printf("\n %d", 2 * i);
//                //       2* 1=> 2
//                //       2* 2=> 4
//                //       2* 3=> 6
//                //..
//                //       2* 10=> 20
//         //4. modification of loop var
       
//     } 
// }

// ===============================================================================

// // while
// int main()
// {
//      //1. Initialization of loop var
//     int i= 1; 
//     //2. we need check the termination condition (10 time)
//     //infinite loop
//     while(-100)
//     {
//         //3. body of while loop(logic)    
//         printf("\n 2 * %d", 2 * i);
               
//         //4. modification of loop var
//        i++;
//     } 
// }

//==========================================================

// while
// int main()
// {
//      //1. Initialization of loop var
//     int i= 1; 
//     //2. we need check the termination condition (10 time)
//     //infinite loop
//     while(i<=10); 
//     {
//         //3. body of while loop(logic)    
//         printf("\n 2 * %d", 2 * i);
               
//         //4. modification of loop var
//        i++;
//     } 
// }