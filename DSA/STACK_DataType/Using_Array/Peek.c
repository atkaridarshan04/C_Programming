// Peek Operation - tells us the value at specific position

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

// For this file
int peek(struct stack *sp, int pos) // O(1)
{
    int arrayInd = sp->top - pos + 1;
    if (arrayInd < 0)
    {
        return -1;
    }
    else
    {
        return sp->arr[arrayInd];
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");

    push(sp, 1);
    push(sp, 23);
    push(sp, 99);
    push(sp, 75);

    // Printing values form the stack
    for (int i = 1; i <= sp->top + 1; i++)
    {
        printf("The value at position %d id %d\n", i, peek(sp, i));
    }
    return 0;
}
