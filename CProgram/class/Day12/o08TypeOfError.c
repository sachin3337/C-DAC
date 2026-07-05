#include<stdio.h>
//type of errors
int main()
{
    //1. compile time error
    // int num1=10;
    // // printf("\n num1=%d", num1) //compile time error
    // printf("\n num1=%d", num1);

    //2. run time error:- in this case program will be compiled successfuly (no compile time error) but
    //error will be raised when grogram is running and result into abnotmal terminatoin of program.
    //Note:- when we are dealing with operating system in such case run time error may arise
    // double res = 10/0; // divide by zero result into infinity or infi

    // printf("\n Hello"); // it will never be executed

    // 3. linker error:- when we are merging the object file(.o or .obj) to generate the .exe / .out file of 
    //our program and one of the module is missing then linker will generate an error called as linker error.
    
    //4. logical error:- it will not generate any compiler error or runctime error rather just because of 
    //mistake in programmes logic programs output will be unexpected value 
    int arr[5] = {10,20,30,40,50}; 
    //start array bound =>  0
    //end array bound (size-1)=>(5-1)=>4
    //wrong end  array bound => 7
     // expected output => 10 20 30 40 50
    //
    for(int i=0 ; i<7 ; i++ )
    {
        printf(" %d " , arr[i]); // 10 20 30 40 50 G G => unexpected output
    }

    //Note:- in C programming there is no concept called as exception handling.
}
