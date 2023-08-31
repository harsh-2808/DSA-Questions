#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int size;
    int top;
    char *arr;
} Stack;

int isEmpty(Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
        return 0;
}

int isFull(Stack *ptr)
{
    if (ptr->top == (ptr->size) - 1)
    {
        return 1;
    }
    else
        return 0;
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

int match(char a, char b)
{
    if (a == '(' || b == ')')
    {
        return 1;
    }

    if (a == '[' || b == ']')
    {
        return 1;
    }

    if (a == '{' || b == '}')
    {
        return 1;
    }
    else
        return 0;
}

int Paranthesis_Matching(char *exp)
{
    Stack *s = malloc(sizeof(Stack));
    s->size = 20;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char popped_ch;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(s, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (isEmpty(s))
            {
                return 0;
            }

            popped_ch = pop(s);
            if (!match(popped_ch, exp[i]))
            {
                return 0;
            }
        }
    }
    if (isEmpty(s))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char *exp = "[(9-8)]+({7-2})";
    if (Paranthesis_Matching(exp))
    {
        printf("The parantheis is balanced\n");
    }
    else
        printf("The parantheis is not balanced\n");
}