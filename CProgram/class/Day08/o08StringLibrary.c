#include<stdio.h>
#include<string.h>
//string lib function , string lib function simulation 
//user defined strlen()
int myStrLen(char * str) //100 => base add
{
//       //          0   1    2    3    4      5
//    char str1[] ={'A','B', 'C', 'D' , 'E' , '\0'};// stack section// string
//               // 100 101
    int cnt=0;
        //         '\0'  != '\0' => 0 
    //           'str[5]' 
    for(int i=0; str[i]!='\0' ; i++  ) //0 +1 => 1 +1 =>2  .... 5
    {
        cnt++; //0 +1 =>1+1=>2+1 => 3 . . . .5
    }
    return cnt; //returning the lenght of string 
}


int main()
{
         //         0     1    2    3    4      5
   char str1[] ={'A','B', 'C', 'D' , 'E' , '\0'};// stack section// string
            // 100 101
    printf("\n %d", str1); //ABCDE=> lenght of string=> 5
    int len=strlen(str1); // strlen is predefined string lib function to cal the len of a string

    printf("\n length of string str1=%d", len); //5 
    len= myStrLen(str1); //base address of string will be passed
    printf("\n length of string usinf mystrlen() str1=%d", len); //5 
   
    printf("\n sizeof string str1=%d", sizeof(str1)); //6 * 1 => 6
    //Note:- strlen will generate the output excluding '\0' (end of string).
   
}