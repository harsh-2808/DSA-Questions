#include <iostream>
using namespace std;

void BubbleSort(int *arr, int n)
{
    if (n == 0 || n == 1)
        return;

    // Ek case khud solve krliya mtlb ek elemnt thik jhag phocha diya first iteration me uske bad recursion dekh lega
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    BubbleSort(arr, n - 1);
}

int main()
{
    int arr[] = {97, 23, 1, 6, 2, 4, 5, 12, 12, 11, 72};
    int size = 11;
    BubbleSort(arr, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}