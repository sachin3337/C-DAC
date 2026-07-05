#include<stdio.h>
#include<stdlib.h>
//file IO
//file write operation
int main()
{
    // 1.open file
    // fopen("nameOfFile,"Mode")
    //FILE is typedef for struct _iobuf
    FILE * fptr= fopen("Hello.txt","w");// here Hello.txt file will be searched in cuurent directory
    //if found then will be opened in write mode and if not found then it will be created and
    //then will be opened in write mode and retun the file pointer.
    //Note:-1. when file opening operation is successfull then it will retunr the file pointer 
    //other wise it will return NULL
    //2. When we open the file in write mode then it's previous data will be lost (overwritten)
    //and new data will get stored.

    if(fptr==NULL)
    {
        printf("\n file openig op failed...!");
    }
    else
    {
    //    2. Get the data  from terminal(user)
        char ch;
        printf("\n Enter the data");
        // getchar():- read the data from terminal char by char
        while((ch=getchar())!=EOF)
        {
            // 3. Write the data into the file char by char
            putc(ch , fptr);
        }
        // 4. close the file
        //fclose(filePointer);
        fclose(fptr);
    }
}