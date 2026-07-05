#include<stdio.h>
//function => named block of code(set of instructions) 

// 1. function declaration/ forward declaration(returnType functionName(formalArguments))
     int add(int num1, int num2); // decleration only not error
     

// 2. function definition (returnType functionName(formalArguments){logic/code})
     //       10       20 
     //       30   ,   40
int add(int  num1, int num2)
{
    //body of add function
    int res= num1+num2;
              //30 + 40 => 70
             //10 + 20 => 30
    return res; // result //30//70 will be return
}

int main()
{
    int num1=10, num2=20;
    int res= add(num1, num2); //3. function call(functionName(actualArguments))
              // 10  ,  20
     //       10+20 =>30
    printf("\n res= %d", res); //30
    int num3 =30, num4=40;
    res= add(num3,num4);//70  //3. function call(functionName(actualArguments))
     //       30  , 40 
    printf("\n res= %d", res); //70
    int num5 =50, num6=60;
    res= add(num5, num6);  //3. function call(functionName(actualArguments))
    printf("\n res= %d", res); //110

}



// #include<stdio.h>
// //function
// void display(int num1)//10
// {

//     printf("\n num1=%d", num1); //10
// }

// void hi()
// {
//     printf("Hi Students");
// }

// int main()
// {
//     int num1=10;
//     display(num1); //10 => call by value
//     hi();
// }