/*The problem statement is : Given an integer array A of size N. You can pick B elements from either left or right end of the array A to get maximum sum. Find and return this maximum possible sum*/

#include <iostream>
#include <vector>
using namespace std;

solve(vector<int> &A, int B)
{
    int sum = 0;
    for (int i = 0; i < B; i++)
    {
        sum += A[i];
    }
    int answer = sum;
    int start = B - 1;
    int end = A.size() - 1;

    while (start >= 0)
    {
        sum = sum + A[end--] - A[start--];
        answer = max(answer, sum);
    }
    return answer;
}

int main()
{
    vector<int> arr = {5, -2, 3, 1, 2};
    int B = 3;
    cout << solve(arr, B);
}