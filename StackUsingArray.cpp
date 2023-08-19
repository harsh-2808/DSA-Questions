#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int size;

public:
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (top < size - 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            top--;
        }
    }

    int peek()
    {
        if (top >= 0 && top < size)
            return arr[top];
        else
        {
            cout << "Stack is empty : ";
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }
};
int main()
{
    Stack s(5);
    s.push(1);
    s.push(23);

    cout << s.peek() << endl;

    s.pop();
    cout << s.peek() << endl;

    s.pop();
    cout << s.peek() << endl;

    s.push(6);
    cout << s.peek() << endl;

    cout << s.isEmpty();
}