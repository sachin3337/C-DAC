#include<stdio.h>
//recursion :- cslling function it self from it's definition / body 
//definiution
void hi()
{
    //body of hi function
    printf("\n Hi Students");
    printf("\n Hi Sunbeam");
    hi();//recursive function call
}
//Note:- unconditional recursive function call leads into stack overflow result into
//program will be terminated abnormallt

int main()
{

    hi();
}



