#include<stdio.h>
#pragma pack(1)
//structure
// struct structureName
// {
//     //body of structure
//     //elements or members of structure

// }; //end of structure

struct student
{
    //body of struct
    //elements or members of structure
    int rollNo; //4 //element of struct student
    char sec; //1 //element of struct student
    double per; // 8 //element of struct student
};//end of struct student
//sizeof struct = sum of size of its elements;
//sizeof struct student= 4 + 1+ 8 => 13 byte

int main()
{
    int num1;
    int num2;
    int num3;
    int arr[3];
    //Note:- to group the similar type of elemnets we declare the array
    //Q. gather the students information ?
    //ans:-  to group logically related but  the non similar or similar type of elemnets we declare 
    //the structure
    //Q. How to access the elements of struct ?
    //Ans:-  // 1. we need to declare the variable of struct 
            //2.  and then using . dot operator we can access an ele of struct
    //syntax :- structVariable.elementName;
    
    //Q. How to declare the structure variable?
    //Ans:- struct structName variableName;
            // or to initialize the struct  var
            // struct structName variableName={init values};
             //        rollNo  sec  per
    struct student std={ 101 ,  'A', 92.23}; // std is variable of struct student
     //syntax :- structVariable.elementName;
    printf("\n ====Student's Info====");
    printf("\n rollNo=%d",  std.rollNo ); //101
    printf("\n sec=%c",  std.sec ); // 'A'
    printf("\n per=%.2lf",  std.per ); // 92.23
    //student1 info 
    // int rollNo=101;
    // char sec= 'A';
    // double per= 92.23;
    printf("\n Size of struct student=%d", sizeof(struct student)); //16 => in multiple 4  (when # pragma pack(1) is not given)
                                                                   // 13 => #pragma pack(1) is given   
}