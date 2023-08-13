#include <iostream>
using namespace std;

void PrintArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

int partition(int A[], int low, int high)
{
    int pivot, i, j;
    int temp;
    pivot = A[low];
    i = low + 1;
    j = high;
    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }

    } while (i < j);

    // Swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void QuickSort(int A[], int low, int high)
{
    int PartitionIndex; // Index of pivot after partition

    if (low < high)
    {
        PartitionIndex = partition(A, low, high);
        QuickSort(A, low, PartitionIndex - 1);  // sort left subarray
        QuickSort(A, PartitionIndex + 1, high); // sort right subarray
    }
}

int main()
{
    int A[] = {2, 1, 3, 9, 4, 4, 8, 7, 5, 6};
    int n = 10;
    cout << "Before running quick sort, Elements: ";
    PrintArray(A, n);
    cout << endl;

    cout << "After running quick sort, Elements: ";
    QuickSort(A, 0, n - 1);
    PrintArray(A, n);
}