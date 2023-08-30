#include <iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;

} Node;

void traversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int isEmpty(Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(Node *top)
{
    Node *p = new Node[sizeof(Node)];
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

Node *push(Node *top, int x)
{
    if (isFull(top))
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        Node *n = new Node[sizeof(Node)];
        n->data = x;
        n->next = top;
        return n;
    }
}

int pop(Node **top)
{
    if (isEmpty(*top))
    {
        cout << "Stack Underflow" << endl;
        return -1;
    }
    else
    {
        Node *n = new Node[sizeof(Node)];
        n = *top;
        *top = (*top)->next;
        int z = n->data;
        delete (n);
        return z;
    }
}

int main()
{
    Node *top = NULL;
    top = push(top, 28);
    top = push(top, 9);
    top = push(top, 13);
    top = push(top, 7);

    traversal(top);

    cout << "The popped element is " << pop(&top) << endl;
    cout << "The popped element is " << pop(&top) << endl;

    traversal(top);
}