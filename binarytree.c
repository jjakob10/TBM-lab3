#include "binarytree.h"

typedef struct Node Node;

struct Node
{
    int item;
    Node *right;
    Node *left;
};

struct Binarytree
{
    Node *root;
};

Node *create(int i)
{
    Node *n = malloc(sizeof(Node));
    n->left = NULL;
    n->right = NULL;
    n->item = i;
    return n;
}

Binarytree *createBinary()
{
    Binarytree *b = malloc(sizeof(Binarytree));
    b->root = NULL;
    return b;
}

Node *_insert(Node *n, int item)
{
    if (!n)
        return create(item);

    if (n->item < item)
        n->right = _insert(n->right, item);
    else if (n->item < item)
        n->left = _insert(n->right, item);

    return n;
}

void insertBinary(Binarytree *b, int item)
{
    b->root = _insert(b->root, item);
}

void _destroy(Node *n)
{
    if (n->right)
        _destroy(n->right);
    if (n->left)
        _destroy(n->left);
    free(n);
}

void destroyBinary(Binarytree *b)
{
    _destroy(b->root);
}
