#include <iostream>
using namespace std;

typedef struct Stack
{
    int size;
    int top;
    int *arr;
} Stack;

int isEmpty(Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

void push(Stack *ptr, int data)
{
    if (isFull(ptr))
    {
        cout << "Stack Overflow! ,can't push " << data << " into stack" << endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = data;
        cout << data << " is pushed into stack" << endl;
    }
}

int pop(Stack *ptr)
{
    if (isEmpty(ptr))
    {
        cout << "Stack Underflow!" << endl;
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(Stack *ptr, int i) //i = position
{
    if (i < 0)
    {
        cout << "Invalid Position" << endl;
        return 0;
    }
    else
    {
        int position = ptr->top - i + 1;
        return ptr->arr[position];
    }
}

int main()
{
    Stack *s = new Stack[sizeof(Stack)];
    s->size = 6;
    s->top = -1;
    s->arr = new int[s->size * sizeof(int)];

    cout << "Stack created successfully\n\n";

    push(s, 28);
    push(s, 3);
    push(s, 45);
    //push(s, 19);

    cout << "\n\n";

    cout << peek(s, 1);
}