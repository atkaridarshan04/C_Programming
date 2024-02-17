#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int f; // front
    int r; // front
    int *arr;
};

int isFull(struct Queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct Queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct Queue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue Overflow. Cannot add %d element", val);
    }
    else
    {
        printf("Enqueued Element: %d\n", val);
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct Queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue UnderFlow.");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
        ;
    }
    return a;
}

int main()
{
    struct Queue q;
    q.size = 2;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    // Enqueue
    enqueue(&q, 10);
    enqueue(&q, 20);

    // Dequeue
    printf("Dequeing Element: %d\n", dequeue(&q));
    printf("Dequeing Element: %d\n", dequeue(&q));

    enqueue(&q, 30);
    // output will show empty and full both beck front and rear are on last
    // To solve these problems we use circular queue
    // and we cannot add any other element

    if (isFull(&q))
    {
        printf("Queue is Full\n");
    }

    if (isEmpty(&q))
    {
        printf("Queue is Empty\n");
    }

    return 0;
}