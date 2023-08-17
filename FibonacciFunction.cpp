#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }

    int next = 0;
    for (int i = 2; i < n; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }
    return next;
}
int main()
{
    cout << fibonacci(12);
}