// To overcome the drawbacks in liner queue we use the concept of circular Queue

#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int f; // front
    int r; // front
    int *arr;
};

int isFull(struct circularQueue *q)
{
    if (((q->r + 1) % q->size) == q->f)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct circularQueue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct circularQueue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue Overflow. Cannot add %d element", val);
    }
    else
    {
        printf("Enqueued Element: %d\n", val);
        q->r = (q->r + 1) % q->size; // direct formula for circular increment
        q->arr[q->r] = val;
    }
}

int dequeue(struct circularQueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue UnderFlow.");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct circularQueue q;
    q.size = 3;
    q.f = q.r = 0; // note in circular queue we initialize form 0 not form -1
                   // so that the circular increment works as we expect
    q.arr = (int *)malloc(q.size * sizeof(int));

    // Enqueue
    enqueue(&q, 10);
    enqueue(&q, 20);

    // Dequeue
    printf("Dequeing Element: %d\n", dequeue(&q));
    printf("Dequeing Element: %d\n", dequeue(&q));

    enqueue(&q, 30);
    enqueue(&q, 30);
    // successfully enqueued

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