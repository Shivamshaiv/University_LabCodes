#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Queue
{
    int rear;
    int front;
    int size;
    int* items;
};

struct Queue* NewCQueue(int size)
{
    struct Queue* q= (struct Queue*)malloc(sizeof(struct Queue*));
    q->front=-1;
    q->rear=-1;
    q->size=size;
    q->items=(int*)malloc(sizeof(int)*size);
    return q;
}
int isFull(struct Queue* q)
{
    if( (q->front == q->rear + 1) || (q->front == 0 && q->rear == q->size-1)) return 1;
    return 0;
}

int isEmpty(struct Queue* q)
{
    if(q->front == -1) return 1;
    return 0;
}
void enQueue(struct Queue* q,int element)
{
    if(isFull(q)) printf("\n Queue is full!! \n");
    else
    {
        if(q->front == -1) q->front = 0;
        q->rear = (q->rear + 1) % q->size;
        q->items[q->rear] = element;
        printf("\nInserted -> %d", element);
    }
}
int deQueue(struct Queue* q)
{
    int element;
    if(isEmpty(q)) {
        printf("\n Queue is empty !! \n");
        return(-1);
    } else {
        element = q->items[q->front];
        if (q->front == q->rear){
            q->front = -1;
            q->rear = -1;
        }
        else {
            q->front = (q->front + 1) % q->size;

        }
        printf("\nDeleted element -> %d \n", element);
        return(element);
    }
}
void printqueue(struct Queue* q)
{
    int i;
    if(isEmpty(q)) printf(" \n Empty Queue\n");
    else
    {
        printf("\nFront -> %d ",q->front);
        printf("\nItems -> ");
        for( i = q->front; i!=q->rear; i=(i+1)%q->size) {
            printf("%d ",q->items[i]);
        }
        printf("%d ",q->items[i]);
        printf("\n Rear -> %d \n",q->rear);
    }
}


void main()
{
    struct Queue* q=NewCQueue(10);
    char choice='W';
    int temp;
    /*
    enQueue(q,9);
    deQueue(q);
    if(isEmpty(q))
    {
        printf("Empty");
    }
    */
   do
    {
        printf("\n");
        printf("\n");
        printf("Press Q to enqueue a element ");
        printf("\nPress D to dequeue an element");
        printf("\nPress P to print the Circular Queue");
        printf("\nPress E to exit");
        printf("\n");
        scanf("%c",&choice);
        //fflush(stdin);
        if(choice=='Q')
        {
            printf("\nPlease enter the integer!");
            scanf("%d",&temp);
            enQueue(q,temp);
        }
        else if(choice=='D')
        {
            deQueue(q);
        }
        else if(choice=='P')
        {
            printqueue(q);
        }
        else if(choice=='E')
        {

        }
        else
        {
            printf("You have pressed %c this is not a valid choice!",choice);
        }

    fflush(stdin);
    }while(choice!='E');


}
