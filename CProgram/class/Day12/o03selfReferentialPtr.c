#include<stdio.h>
//self referential structure pointer
struct node
{   
    int data; // hold the data
    struct node *next; // it will hold an address of next node
};

int main()
{
    struct node node1={10, NULL};
    struct node node2={20, NULL};
    node1.next=&node2; 
    //node1 next will hold an address of node2
    printf("\n node1 data=%d", node1.data); //10
    printf("\n node2 data=%d", node2.data); //20
    // Q.  if I want to access the data of node2 through node1 ?
    printf("\n node2 data through node1 => %d", node1.next->data); //20
}