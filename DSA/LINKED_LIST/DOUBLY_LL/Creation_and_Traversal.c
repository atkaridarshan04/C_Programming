#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void display(struct Node *newNode)
{
    do
    {
        printf("Element is %d\n", newNode->data);
        newNode = newNode->next;
    } while (newNode != NULL);
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->prev = NULL;
    head->next = first;

    first->data = 20;
    first->prev = first;
    first->next = second;

    second->data = 30;
    second->prev = first;
    second->next = third;

    third->data = 40;
    third->prev = second;
    third->next = NULL;

    display(head);
    return 0;
}