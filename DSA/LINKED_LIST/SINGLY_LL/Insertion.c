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

struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->next = head;
    newNode->data = data;
    return newNode;
}

struct Node *insertAtIndex(struct Node *head, int data, int index) // insert in between
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    int i = 0;
    while (i != index - 1) // works for index > 1
    {
        p = p->next;
        i++;
    }

    newNode->data = data;
    newNode->next = p->next;
    p->next = newNode;
    return head;
}

struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }

    newNode->data = data;
    p->next = newNode;
    newNode->next = NULL;
    return head;
}

struct Node *insertAfterNode(struct Node *head, struct Node *previousNode, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = previousNode->next;
    previousNode->next = newNode;
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

    linkedListTraversal(head);

    printf("\nInsetion At First\n");
    head = insertAtFirst(head, 1);
    linkedListTraversal(head);

    printf("\nInsertion In Between\n");
    head = insertAtIndex(head, 3, 1);
    linkedListTraversal(head);

    printf("\nInsetion At End\n");
    head = insertAtEnd(head, 100);
    linkedListTraversal(head);

    printf("\nInsetion After Node\n");
    head = insertAfterNode(head, second, 7);
    linkedListTraversal(head);

    return 0;
}

// While revising for better understaqnding comment out the other function calls. 