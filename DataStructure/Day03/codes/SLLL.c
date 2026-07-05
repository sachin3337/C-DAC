#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* head = NULL;


struct node* create_node();
void add_node_at_first_pos(int value);
void display();
void add_node_at_last_pos(int value);
int count_nodes();
void add_node_at_specific_pos(int value,int pos);

int main()
{
   add_node_at_first_pos(10); 
   add_node_at_first_pos(20);
   add_node_at_first_pos(30);
   printf("\nAdd Node at First pos :\n");
   // head->30->20->10
   display();
   add_node_at_last_pos(45);
   add_node_at_last_pos(25);
   add_node_at_last_pos(50);
   printf("\n\nAdd Node at Last pos :\n");
   // head->30->20->10->45->25->50
   display();

   add_node_at_specific_pos(75,4);
    printf("\n\nAdd Node at 4th pos :\n");
   // head->30->20->10->75->45->25->50
   display();





    return 0;
}

struct node* create_node()
{
     struct node *ptr =(struct node*) malloc(sizeof(struct node));
     ptr->data = 0;
     ptr->next = NULL;
     return ptr; // return 500
}

void add_node_at_first_pos(int value)
{
    //1. create a node
  struct node *ptr = create_node();

  // 2. assign the value to the data field
  ptr->data = value;

    // 3. attach the node.
    // a. if the lsit is empty
    if(head == NULL)
    {
        head = ptr;
    }
    else //b. if the list is having multiple nodes
    {
        ptr->next = head;
        head = ptr;
    }

}

void display()
{
    struct node *trav = head;

    printf("Head");
    while(trav != NULL)
    {
        printf("->%d",trav->data);
        trav = trav->next;
    }
    // Head->30->20->10
}

void add_node_at_last_pos(int value)
{
    struct node *ptr = create_node();

    ptr->data = value;

    if(head == NULL)
    {
        head = ptr;   
    }
    else
    {
        struct node *trav = head;

        while(trav->next != NULL)
        {
            trav = trav->next;
        }
        trav->next = ptr;

    }
}

void add_node_at_specific_pos(int value,int pos)
{
    if(head == NULL)
    {
        if(pos == 1)
            add_node_at_first_pos(value);
        else
            printf("Cannot add the node at this pos.\n");
    }
    else if(pos == 1)
        add_node_at_first_pos(value);
    else if(pos == count_nodes()+1)
        add_node_at_last_pos(value);
    else if(pos < 1 || pos > count_nodes()+1)
        printf("Cannot add the node at this pos.\n");
    else
    {
        struct node* ptr = create_node();
        ptr->data = value;

        struct node* trav = head;

        for(int i =1; i< pos-1; i++)
            trav = trav->next;

        ptr->next = trav->next;
        trav->next = ptr;
    }
}

int count_nodes()
{
    struct node* trav = head;
    int count = 0;

    while(trav != NULL)
    {
        count++;
        trav = trav->next;
    }
    return count;

}