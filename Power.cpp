#include <iostream>
using namespace std;

int power(int a, int b) // a-> Base   b->Power
{
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    int answer = power(a, b / 2);

    if (b % 2 == 0) // If b is even
    {
        return answer * answer;
    }
    else // If b is odd
        return a * answer * answer;
}

int main()
{
    cout << power(2, 2);
}