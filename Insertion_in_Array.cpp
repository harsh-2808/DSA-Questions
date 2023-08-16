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

int Insertion_Sorted(int arr[], int size, int capacity, int element, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    else
    {

        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
    }
}

int Insertion_Unsorted(int arr[], int size, int capacity, int element, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    else
    {

        for (int i = index; i <= index; i++)
        {
            arr[size] = arr[index];
        }
        arr[index] = element;
    }
}

int main()
{
    int size = 4;
    int array[10] = {2, 4, 6, 8};
    Display(array, size);
    Insertion_Sorted(array, size, 10, 5, 2);
    size++;
    Display(array, size);

    return 0;
}