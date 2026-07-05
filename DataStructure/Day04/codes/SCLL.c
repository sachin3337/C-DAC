#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *head = NULL;

void add_first_node(int value);
node* create_node();
void display();
void add_last_node(int value);
void delete_first_node();
void delete_last_node();

int main()
{
    add_first_node(10); // head->10
    add_first_node(25); // head->25->10
    add_first_node(40); // head->40->25->10
    printf("\n Add first node:\n");
    display();
    // Head->40->25->10
   
   
    add_last_node(70);
    add_last_node(25);
    add_last_node(50);
    printf("\n Add Last node:\n");
    display();
    // Head->40->25->10->70->25->50

    delete_first_node();
    printf("\n Delete first node:\n");
    display();
    // Head->25->10->70->25->50

    delete_last_node();
    printf("\n Delete Last node:\n");
    display();
    // Head->25->10->70->25


    return 0;
}

node* create_node()
{
    node *ptr =(node*) malloc(sizeof(node));
    ptr->data = 0;
    ptr->next = NULL;
    return ptr;
}

void add_first_node(int value)
{
    node *new_node = create_node();
    new_node->data = value;


   if(head == NULL)
   {
    head = new_node;
    head->next = new_node; // to make it circular
   }
   else
   {
    struct node *trav = head;
    while(trav->next != head)
    {
        trav = trav->next;
    }
    new_node->next = head;
    head = new_node;
    trav->next = head; // to make it circular
   }

}

void display()
{
    if(head == NULL)
        printf("List is empty.\n");
    else
    {
        node* trav = head;
        printf("Head");
        do
        {
           printf("->%d",trav->data);
           trav = trav->next;
           
        } while (trav != head);
        
    }
}

void add_last_node(int value)
{
    node* new_node = create_node();
    new_node->data = value;

    if(head == NULL)
    {
        head = new_node;
        new_node->next = head; // circular
    }
    else
    {
        node* trav = head;
        while(trav->next != head)
            trav = trav->next;

        trav->next = new_node;
        new_node->next = head; // circular
    }
}

void delete_first_node()
{
    if(head == NULL)
        printf("List is empty.\n");
    else if(head->next == head)
    {
        free(head);
        head = NULL;
    }
    else
    {
        node* trav = head;
        while(trav->next != head)
            trav = trav->next;

        node* temp = head;
        head = head->next;
        free(temp);
        temp = NULL;

        trav->next = head;
    }
}

void delete_last_node()
{
    if(head == NULL)
        printf("List is empty.\n");
    else if(head->next == head)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *trav = head;
        while(trav->next->next != head)
            trav = trav->next;

        free(trav->next);
        trav->next = head; // circular
    }
}