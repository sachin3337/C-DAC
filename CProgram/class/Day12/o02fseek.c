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
        //ftell(fptr) => ftell() will return the current poisition of file pointer.
        printf("\n current pos of file pointer =%d \n",ftell(fptr)); //0
        while((ch=getc(fptr))!= EOF)
        {
            // 3. Print data on terminal
            //putchar(ch):- it will print the data onto the termminal char by char
            putchar(ch);
            printf( "\n %d ", ftell(fptr)); //1
        }

        printf("\n current pos of file pointer =%d \n", ftell(fptr)); //9
        //fseek(filePointer, offset, SourcePos)
        fseek(fptr, -4, SEEK_END); // file pointer will be reposition from end of file to
        //bakward pos as per offset (9 - 4 => 5).
        printf("\n current pos of file pointer =%d \n", ftell(fptr)); //5

        fseek(fptr, 3 , SEEK_SET); //file pointer will be reposition from the inception 
        //of file to pos as offset (0 + 3 => 3 ) forward.
        printf("\n current pos of file pointer =%d \n", ftell(fptr)); //3

        fseek(fptr, 1, SEEK_CUR);// file pointer will be reposition from current ppos of 
        //file pointer backward or foreward as per the offseat value (3+1 => 4).
        printf("\n current pos of file pointer =%d \n", ftell(fptr)); //4

        char c=getc(fptr);
        printf("\n c=%c",c ); // 'e' 
        printf("\n current pos of file pointer =%d \n", ftell(fptr)); //5

        

    }
    // 4. close the file
    // fclose(filePointer);
    fclose(fptr);
}
