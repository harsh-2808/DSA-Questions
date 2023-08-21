#include <iostream>
using namespace std;

void InputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++, end--;
    }
}

int main()
{
    int arr[10];
    int size;
    cout << "Enter size of array " << endl;
    cin >> size;
    cout << "Enter " << size << " elements: " << endl;
    InputArray(arr, size);

    cout << "Original Array" << endl;
    printArray(arr, size);

    cout << endl;
    reverse(arr, size);
    cout << "Reverse Array" << endl;
    printArray(arr, size);
}
