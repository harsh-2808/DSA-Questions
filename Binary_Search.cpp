#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int element)
{
    int low, high, mid;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] > element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int array[] = {2, 1, 4, 8, 6, 5};
    int BinaryResult = BinarySearch(array, 6, 6);
    cout << BinaryResult << endl;
}