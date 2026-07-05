#include<stdio.h>
//for loop

int main()
{
     //1. Initialization of loop var
    
    //2. we need check the termination condition (10 time)
        //3. body of while loop(logic)    
        //4. modification of loop var
    //     1.        2.  4.
    for(int i =1; i<=10; i++)
    {
        //3. body of for loop
        printf("\n %d", 2 * i);
    } 
}






// #include<stdio.h>
//for loop

// int main()
// {
//     for(int i =1; i<=10; )
//     {
//         //3. body of for loop
//         printf("\n %d", 2 * i);
//         i++;
//     } 
// }
//=============================================
// int main()
// {
//     //infinite loop
//     for(int i =1; i<=10; )
//     {
//         //3. body of for loop
//         printf("\n %d", 2 * i);
//     } 
// }

//==================================================


// int main()
// {
//     //infinite loop
//     int i =1;
//     //infinite loop
//     for( ;i<=10; )
//     {
//         //3. body of for loop
//         printf("\n %d", 2 * i);
//     } 
// }



// int main()
// {
   
//     int i =1;
//     //infinite loop
//     for(  ;    ; i++)
//     {
//         //3. body of for loop
//         printf("\n %d", 2 * i);
//     } 
// }

// int main()
// {
//     //infinite loop
//     int i =1;
//     //infinite loop
//     for( ;i<=10;i++);//end of for loop //11<=10 => 0
//     {
//         //not a body of for loop
//         printf("\n %d", 2 * i); //2*11 => 22
//     } 
// }