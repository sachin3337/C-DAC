#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct stack
{
    int arr[SIZE];
    int top;
};

void init_top(struct stack *ps) ;
int peek(struct stack *ps);
void push(int value,struct stack *ps);
void pop(struct stack *ps);
int stack_empty(struct stack *ps);
int stack_full(struct stack *ps);

int main()
{
    struct stack S;
    init_top(&S); 
        int choice;
do
{

    printf("0.Exit\n1.Push\n2.Pop\n3.Peek\n");
    printf("Enter your choice :");
    scanf("%d",&choice);

    switch(choice)
    {
        case 0 : 
                exit(0);
        case 1: // push
                if(stack_full(&S)) // if(0)
                {
                    printf("Stack is Full.\n");
                }
                else
                {
                    int value;
                    printf("Enter the value to push :");
                    scanf("%d",&value);
                    push(value,&S);
                    printf("Value Pushed = %d\n",value);
                }
                break;
        case 2: // Pop
                if(stack_empty(&S))
                {
                    printf("Stack is Empty, cannot pop.\n");
                }
                else
                {
                   int val = peek(&S);
                    pop(&S);
                    printf("Value popped = %d.\n",val);
                }
                break;
        case 3: // peek
                if(stack_empty(&S))
                    printf("Stack is empty, Cannot Peek.\n");
                else
                {
                    int top = peek(&S);
                    printf("Topmost value = %d.\n",top);
                }
                break;
        default :
                    printf("Invalid Choice.\n");
    }
}while(choice != 0);
    return 0;
}

void init_top(struct stack *ps) 
{
    ps->top = -1;
}

void push(int value,struct stack *ps)
{
    // increment the top
    ps->top++;

    // insert the value at the top index.
    ps->arr[ps->top] = value;
}

void pop(struct stack *ps)
{
    // optional : make the topmost value as 0
    ps->arr[ps->top] = 0;

    // decrement the top;
    ps->top--;
}

int peek(struct stack *ps)
{
    return ps->arr[ps->top];
}

int stack_full(struct stack *ps)
{
    if(ps->top == SIZE-1)
        return 1;
    else
        return 0;

    // return ps->top == SIZE-1;
}

int stack_empty(struct stack *ps)
{
    return ps->top == -1;
}