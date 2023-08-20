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

void alternateSwap(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
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

    cout << "Original Array: ";
    printArray(arr, size);

    cout << endl;
    alternateSwap(arr, size);
    cout << "Array after swaping alternate elements: ";
    printArray(arr, size);
}