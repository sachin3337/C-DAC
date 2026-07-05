#include<stdio.h>
//const pointer
int main()
{
    int num1=10;
    int * ptr= &num1;
    printf("\n value at ptr=%d", *ptr); // 10

    int num2 = 20;

    ptr= &num2; //address within pointer ptr has been modified to address of num2 
    printf("\n value at ptr=%d", *ptr); // 20

}



// #include<stdio.h>
// //const pointer
// int main()
// {
//     int num1=10;
//     int * const ptr= &num1; // we have declared the ptr as constant pointer and hence forth
//     //after pointer var initializatrion address within pointer ptr can not be modified
//     printf("\n value at ptr=%d", *ptr); // 10

//     int num2 = 20;

//    // ptr= &num2; //not ok as int * const ptr= &num1;
//     printf("\n value at ptr=%d", *ptr); // 10

// }