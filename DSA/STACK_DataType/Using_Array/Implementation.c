#include <stdio.h>
#include <stdlib.h>
 
struct stack
{
    int size;
    int top;
    int *arr;
};
 
int isEmpty(struct stack *ptr)  // O(1)
{
    if (ptr->top == -1)  // implies array/stack is empty
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int isFull(struct stack *ptr)   // O(1)
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
 
int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));
 
    struct stack *s;
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    
    if (isEmpty(s))
    {
        printf("The stack is Empty\n");
    }
    else
    {
        ("The stack is not empty\n");
    }

    if (isFull(s))
    {
        printf("The stack is Full\n");
    }
    else
    {
        ("The stack is not Full\n");
    }
    return 0;
}
