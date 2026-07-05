// #include<stdio.h>
// //const 
// int main()
// {
//     const double PI = 3.142;//PI is const(read only)=> value cant be modified
//     //after it's initialization
//     double rad= 15.34;
//     //find area of circle ?
//     //PI rad * rad;
//     printf("\n area of circle=%.3lf", PI*rad*rad); //area of circle
//    // PI = 5.22;//not ok as PI has been declared as const //modification of value of PI
//     printf("\n area of circle=%.3lf", PI*rad*rad); //area of circle
// }



// #include<stdio.h>
// //const 
// int main()
// {
//     const double PI = 3.142;//PI is const(read only)=> value cant be modified
//     //after it's initialization
//     double* ptr =&PI; //ptr is pointer holding an address of var PI

//     double rad= 15.34;

//     //find area of circle ?
//     //PI rad * rad;
//     printf("\n area of circle=%.3lf", PI*rad*rad); //area of circle
//    // PI = 5.22;//not ok as PI has been declared as const //modification of value of PI
//    *ptr= 6.45;//(value at addres 100)= 6.45 //we have modified the value of const var PI indeirectly
//     //using pointer manipulation.
//    printf("\n PI=%.3lf", PI); //6.450
//    printf("\n area of circle=%.3lf", PI*rad*rad); //area of circle
// }



#include<stdio.h>
//const 
int main()
{
    //Q. aviod the modification of const var value using pointer manipulation ? 
    const double PI = 3.142;//PI is const(read only)=> value cant be modified
    //after it's initialization
    double const * ptr =&PI; //ptr is pointer holding an address of var PI
    //or
    // const double * ptr=&PI;

    double rad= 15.34;

    //find area of circle ?
    //PI rad * rad;
    printf("\n area of circle=%.3lf", PI*rad*rad); //area of circle
   // PI = 5.22;//not ok as PI has been declared as const //modification of value of PI
   //*ptr= 6.45;//not ok as double const * ptr =&PI;
   printf("\n PI=%.3lf", PI); //6.450
   printf("\n area of circle=%.3lf", PI*rad*rad); //area of circle
}