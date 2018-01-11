#include<stdio.h>
#include<conio.h>

struct Stack
{
  int top;
  int capacity;
  int* array;
};

struct Stack* newStack(int capacity)
{
    struct Stack* s =(struct Stack*)malloc(sizeof(struct Stack));
    s->capacity=capacity;
    s->top=-1;
    s->array=(int*)malloc(capacity*sizeof(int));
    return s;
};

int isFull(struct Stack* s)
{
    return s->top==s->capacity-1;
}

int IsEmpty(struct Stack* s)
{
    return s->top==-1;
}
void push(struct Stack* s , int val)
{
    if(isFull(s))
    {
        printf("Stack full");
        return;
    }
    else{
            s->top++;
        s->array[s->top]=val;

        printstack(s);
        printf("\n Pushed %d in the stack",s->array[s->top]);
    }
}
int pop(struct Stack* s)
{
    if (IsEmpty(s))
    {
        printf("Empty stack");
    }
    int p = s->array[s->top--];
    printstack(s);
    return p;
}

void printstack(struct Stack* s)
{
    int temp=s->top,i=0;
    printf("\n");
    for(i=temp;i>=0;i--)
    {
      printf("\n |%d|",s->array[i]);
    }

}

int main()
{
    struct Stack* stack = newStack(100);

    push(stack, 10);

    push(stack, 20);

    push(stack, 30);

    printf("\n %d popped from stack\n", pop(stack));

    return 0;
}

