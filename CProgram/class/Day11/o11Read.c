#include<stdio.h>
#include<stdlib.h>
//file IO
//file read operation
int main()
{

    // 1.open file in  read mode
    // fopen("nameOfFile,"Mode")
    FILE * fptr= fopen("Hello.txt", "r"); // here file Hello.txt will be searched in current 
    // folder,  if found then it will be opened in read mode and file pointer will be returned
    //if file not found at the given path or current folder then it will return NULL.
    //Note:- if file opening fails it will return NULL

    if(fptr == NULL)
    {
        printf("\n File opening operation fails");

    }
    else
    {
        char ch;  
        //getc() :- used to resd the data from file char by char
        // 2. Read the data from the file
            //getc(filePointer)
        while((ch=getc(fptr))!= EOF)
        {
            // 3. Print data on terminal
            //putchar(ch):- it will print the data onto the termminal char by char
            putchar(ch);
        }
    }
    // 4. close the file
    // fclose(filePointer);
    fclose(fptr);
}
