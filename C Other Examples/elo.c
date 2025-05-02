#include <stdio.h>
#include <stdlib.h>
//written by Elif BAĞCI
typedef enum { RED, BLACK } NodeColor;

typedef struct Node 
{
    int myData;
    NodeColor color;
    struct Node *nodeLeft, *nodeRight, *parent;
} Node;

Node *root = NULL;

Node *myNodeCreator(int myData) 
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->myData = myData;
    node->color = RED;  
    node->nodeLeft = node->nodeRight = node->parent = NULL;
    return node;
}

void myRightNodeRotator(Node **root, Node *y) 
{
    Node *x = y->nodeLeft;
    y->nodeLeft = x->nodeRight;

    if (x->nodeRight != NULL)
        x->nodeRight->parent = y;
    x->parent = y->parent;

    if (y->parent == NULL)
    {
        *root = x;
    }

    else if (y == y->parent->nodeLeft)
    {
        y->parent->nodeLeft = x;
    }

    else
        y->parent->nodeRight = x;
    x->nodeRight = y;
    y->parent = x;
}

void myLeftNodeRotator(Node **root, Node *x) 
{
    Node *y = x->nodeRight;
    x->nodeRight = y->nodeLeft;

    if (y->nodeLeft != NULL)
        y->nodeLeft->parent = x;
    y->parent = x->parent;

    if (x->parent == NULL)
    {
        *root = y;
    }

    else if (x == x->parent->nodeLeft)
    {
        x->parent->nodeLeft = y;
    }
    
    else
        x->parent->nodeRight = y;
    y->nodeLeft = x;
    x->parent = y;
}

void insertNodeedNodeFixer(Node **root, Node *z) 
{
    while (z->parent && z->parent->color == RED) 
    {
        Node *grandparent = z->parent->parent;

        if (z->parent == grandparent->nodeLeft) 
        {
            Node *uncle = grandparent->nodeRight;

            if (uncle && uncle->color == RED) 
            {
                z->parent->color = BLACK;
                uncle->color = BLACK;
                grandparent->color = RED;
                z = grandparent;
            }
            else 
            {
                if (z == z->parent->nodeRight) 
                {
                    z = z->parent;
                    myLeftNodeRotator(root, z);
                }

                z->parent->color = BLACK;
                grandparent->color = RED;
                myRightNodeRotator(root, grandparent);
            }
        }
        else 
        {
            Node *uncle = grandparent->nodeLeft;

            if (uncle && uncle->color == RED) 
            {
                z->parent->color = BLACK;
                uncle->color = BLACK;
                grandparent->color = RED;
                z = grandparent;
            }
            else 
            {
                if (z == z->parent->nodeLeft) 
                {
                    z = z->parent;
                    myRightNodeRotator(root, z);
                }

                z->parent->color = BLACK;
                grandparent->color = RED;
                myLeftNodeRotator(root, grandparent);
            }
        }
    }

    (*root)->color = BLACK;
}
//written by Elif BAĞCI
void insertNode(Node **root, int myData) 
{
    Node *z = myNodeCreator(myData);
    Node *y = NULL;
    Node *x = *root;

    while (x != NULL) 
    {
        y = x;

        if (z->myData < x->myData)
        {
            x = x->nodeLeft;
        }
        else
        {
            x = x->nodeRight;
        }
    }

    z->parent = y;

    if (y == NULL)
    {
        *root = z;
    }

    else if (z->myData < y->myData)
    {
        y->nodeLeft = z;
    }

    else
        y->nodeRight = z;

    insertNodeedNodeFixer(root, z);
}

void orderNodes(Node *root) 
{
    if (root != NULL) 
    {
        orderNodes(root->nodeLeft);
        printf("%d\n", root->myData);
        orderNodes(root->nodeRight);
    }
}

void redBlackTreePrinter(Node *root) 
{
    if (!root) return;

    Node *queue[100];
    int start = 0, end = 0;
    queue[end++] = root;

    while (start < end) 
    {
        int levelSize = end - start;

        for (int i = 0; i < levelSize; i++) 
        {
            Node *node = queue[start++];
            printf("%d %c", node->myData, node->color == RED ? 'R' : 'B');

            if (node->parent)
            {
                printf(" (%d %s)", node->parent->myData,
                       node == node->parent->nodeLeft ? "L" : "R");
            }

            printf(" ");

            if (node->nodeLeft) queue[end++] = node->nodeLeft;
            if (node->nodeRight) queue[end++] = node->nodeRight;
        }

        printf("\n");
    }
}

int main() 
{
    int myData;

    while (1) 
    {
        scanf("%d", &myData);

        if (myData == -1)
        {
            break;
        }

        insertNode(&root, myData);
    }

    orderNodes(root);
    printf("\n");
    redBlackTreePrinter(root);
    return 0;
}
//written by Elif BAĞCI
