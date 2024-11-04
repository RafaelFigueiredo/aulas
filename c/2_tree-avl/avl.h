// An AVL tree node
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};

int height(struct Node *N);
int max(int a, int b);
struct Node *createNode(int key);
struct Node *rightRotate(struct Node *y);
struct Node *leftRotate(struct Node *x);
int getBalance(struct Node *N);
struct Node *insertNode(struct Node *node, int key);
void inOrder(struct Node *root);