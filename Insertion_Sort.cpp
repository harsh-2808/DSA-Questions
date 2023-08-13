#include <iostream>
using namespace std;

void traverse(int *A, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void InsertionSort(int *A, int size)
{
    // For no. of passes
    for (int i = 1; i <= size - 1; i++)
    {
        // For each pass
        int key, j;
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

int main()
{
    int A[] = {23, 56, 3, 2, 86, 33, 99, 987, 567, 211};
    int n = 10;
    cout << "Before Sorting : ";
    traverse(A, n);

    InsertionSort(A, n);
    cout << "After Sorting : ";
    traverse(A, n);
}