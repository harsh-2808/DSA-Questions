#include <iostream>
using namespace std;

int SetBit(int x, int y)
{
    int count = 0;
    while (x != 0 || y != 0)
    {
        if (x & 1 == 1)
        {
            count++;
        }
        x = x >> 1;
        if (y & 1 == 1)
        {
            count++;
        }
        y = y >> 1;
    }
    return count;
}

int main()
{
    int answer = SetBit(23, 7);
    cout << "Total No. of Set Bits in a and b : " << answer << endl;
}