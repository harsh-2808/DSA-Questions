#include <iostream>
using namespace std;

class Solution
{
public:
    int hammingWeight(long long int n)
    {

        int count = 0;
        while (n != 0)
        {

            // checking last bit
            if (n & 1)
            {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};

int main()
{
    Solution s;
    cout << s.hammingWeight(0001101);
}