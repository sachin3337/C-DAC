#include<stdio.h>
//string
int main()
{
    char arr[5]={'A','B', 'C', 'D' , 'E'}; // not a string

    for(int i=0; i< 5 ; i++)
    {
        printf("%c", arr[i]);
    }

    //string is char array having last element as '\0' =>end of string 
    char str[6] ={'A','B', 'C', 'D' , 'E' , '\0'}; // string
    printf("\n  String str=> "); 
    printf("%s", str );//ABCDE
    printf("\nsize of string str=%d", sizeof(str)); //6 * 1=> 6 


}