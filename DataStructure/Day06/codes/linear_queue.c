#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct queue
{
    int arr[SIZE];
    int rear;
    int front;
};

void init_queue(struct queue *pq);
void enqueue(int value,struct queue *pq);
void dequeue(struct queue *pq);
int peek(struct queue *pq);
int queue_empty(struct queue *pq);
int queue_full(struct queue *pq);

int main()
{
    struct queue Q;
    init_queue(&Q);

    int choice;
do{
    printf("0.Exit\n1.Enqueue\n2.DEqueue\n3.Peek\n");
    printf("Enter your choice :");
    scanf("%d",&choice);

    switch(choice)
    {
        case 0 : exit(0);

        case 1: // enqueue
                if(queue_full(&Q))
                    printf("Q is Full.\n");
                else
                {
                    int value;
                    printf("Enter the value to insert :");
                    scanf("%d",&value);
                    enqueue(value,&Q);
                    printf("Valued entered = %d\n",value);
                }
                break;
        case 2 : // dequeue
                    if(queue_empty(&Q))
                        printf("Q empty. Cannot dequeue.\n");
                    else
                    {
                        int value = peek(&Q);
                        dequeue(&Q);
                        printf("Element deleted : %d\n",value);
                    }
                    break;
        case 3 : // peek
                    if(queue_empty(&Q))
                        printf("Q is empty. Cannot peek.\n");
                    else
                    {
                        int value = peek(&Q);
                        printf("Frontmost value = %d\n",value);
                    }
                    break;
        default :
                    printf("Invalid choice.\n");
    }
} while(choice != 0);
    return 0;
}

void init_queue(struct queue *pq)
{
    pq->rear = -1;
    pq->front = -1;
}

void enqueue(int value,struct queue *pq)
{
    pq->rear++;

    pq->arr[pq->rear] = value;

    if(pq->front == -1)
        pq->front = 0;
}

void dequeue(struct queue *pq)
{
    pq->arr[pq->front] = 0; // optional
    pq->front++;
}

int peek(struct queue *pq)
{
    return pq->arr[pq->front];
}

int queue_full(struct queue *pq)
{
    return pq->rear == SIZE-1;
}

int queue_empty(struct queue *pq)
{
    return pq->rear == -1 || pq->front > pq->rear;
}