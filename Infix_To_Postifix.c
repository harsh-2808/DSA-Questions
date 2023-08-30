#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stack
{
    int size;
    int top;
    char *arr;
} Stack;

int Stack_Top(Stack *s)
{
    return s->arr[s->top];
}

int isEmpty(Stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
        return 0;
}

int isFull(Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(Stack *ptr, char data)
{
    if (isFull(ptr))
    {
        printf("Stack overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
}

int pop(Stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }
    else
        return 0;
}

int Precedence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else
        return 0;
}

char *InfixToPostfix(char *Infix)
{
    Stack *s = (Stack *)malloc(sizeof(Stack));
    s->size = 10;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));

    char *Postfix = (char *)malloc((strlen(Infix) + 1) * sizeof(char));
    int i = 0; // Track Infix Traversal
    int j = 0; // Track Postifix Filling
    while (Infix[i] != '\0')
    {
        if (!isOperator(Infix[i]))
        {
            Postfix[j] = Infix[i];
            j++;
            i++;
        }
        else
        {
            if (Precedence(Infix[i]) > Precedence(Stack_Top(s)))
            {
                push(s, Infix[i]);
                i++;
            }
            else
            {
                Postfix[j] = pop(s);
                j++;
            }
        }
    }
    while (!isEmpty(s))
    {
        Postfix[j] = pop(s);
        j++;
    }
    Postfix[j] = '\0';
    return Postfix;
}

int main()
{
    char *Infix = "x-y/z-k*d";
    printf("Postfix is %s", InfixToPostfix(Infix));
    return 0;
}