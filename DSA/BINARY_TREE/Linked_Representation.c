// Using Doublly LinkedList

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
}

//      4
//     / \
//    1   6
//   / \  / \
//  5  2  10 1
// and so on

int main()
{
    // Creating Node
    struct node *p = createNode(4); //--> root node
    struct node *p1 = createNode(8);
    struct node *p2 = createNode(5);

    // Linking the root node with left and Right Children
    p->left = p1;
    p->right = p2;

    return 0;
}