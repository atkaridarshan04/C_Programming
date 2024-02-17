#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *newNode)
{
    while (newNode != NULL)
    {
        printf("Element = %d\n", newNode->data);
        newNode = newNode->next;
    }
}

struct Node *deleteFirst(struct Node *head)
{
    struct Node *newNode = head;
    head = head->next;
    free(newNode); // to free up the allocated memory
    return head;
}

struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct Node *deleteLast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

struct Node *deleteValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocate memory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second node;
    head->data = 11;
    head->next = second;

    // Link second and third node
    second->data = 15;
    second->next = third;

    // Terminating at third node
    third->data = 60;
    third->next = NULL;

    printf("Linked List befor deletion\n");
    linkedListTraversal(head);

    // printf("\nDeleting First Element\n");
    // head = deleteFirst(head);
    // linkedListTraversal(head);

    // printf("\nDeleting Element at an Index\n");
    // head = deleteAtIndex(head, 2);
    // linkedListTraversal(head);

    // printf("\nDeleting Last Element\n");
    // head = deleteLast(head);
    // linkedListTraversal(head);

    printf("\nDeleting Element of a particular value\n");
    head = deleteValue(head, 15);
    linkedListTraversal(head);

    return 0;
}

// While revising for better understaqnding comment out the other function calls.