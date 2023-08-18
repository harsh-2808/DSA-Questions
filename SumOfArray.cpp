#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    int sum = 0;
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[10];
    cout << sum(arr, 7);
}