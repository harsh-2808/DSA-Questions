#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int answer = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        answer = (bit * (pow(10, i) + 1e-9)) + answer; // 1e-9 = 0.000000001
        n = n >> 1;
        i++;
    }
    cout << answer << endl;
}
