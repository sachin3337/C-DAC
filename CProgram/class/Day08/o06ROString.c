#include<stdio.h>
//string in RO data section Vs string in stack section

int main()
{ 
        //      0     1    2    3    4      5
   char str[6] ={'A','B', 'C', 'D' , 'E' , '\0'};// stack section// string
    printf("\n str = %s", str);//ABCDE
    //MOdify the string as  => AZCDE
    str[1]='Z'; //'Z' will over write the 'B' 
     printf("\n str = %s", str);//AZCDE

    char * ptr ="Sunbeam" ; // here string Sunbeam will be strored in RO(read only) data
    //section and it's address willbe strored in pointer to char ptr
    printf("\n %s",ptr);
    //Q. Modify the string Snbeam to Sonbeam ?
    ptr[1] = 'o'; // we are trying yo modify the string stored in RO data section, it will
    //result in to run time error which will result into abnormal termination of program
    printf("\n modified  string= %s ", ptr); //this will never be executed
}



// #include<stdio.h>

// int main()
// { 
//         //         0     1    2    3    4      5
//    char str1[6] ={'A','B', 'C', 'D' , 'E' , '\0'};// stack section// string
//                 // 100 101
//      //           0     1    2    3    4      5
//    char str2[6] ={'A','B', 'C', 'D' , 'E' , '\0'};// stack section// string
//            //    200  201
   
//       //100 == 200 =>0       
//     if(str1==str2) //address will be compared
//     {
//         printf("same");
//     }
//     else
//     {
//         printf("not same");
//     }

// }