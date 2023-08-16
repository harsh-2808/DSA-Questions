#include <iostream>
using namespace std;

void Display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int Deletion_Sorted(int arr[], int size, int index)
{

    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int Deletion_Unsorted(int arr[], int size, int index)
{

    for (int i = index; i <= index; i++)
    {
        arr[i] = arr[size - 1];
    }
}

int main()
{
    int size = 5;
    int array[10] = {2, 4, 6, 8, 10};
    Display(array, size);
    Deletion_Sorted(array, size, 2);
    Deletion_Unsorted(array, size, 2);
    size--;
    Display(array, size);

    return 0;
}