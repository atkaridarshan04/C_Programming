#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *head)
{
    struct Node *newNode = head;
    do      // This is best way of traversal for circular LL
    {
        printf("Element is %d\n", newNode->data);
        newNode = newNode->next;
    } while (newNode != head);
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

    return 0;
}