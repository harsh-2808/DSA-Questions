#include <iostream>
using namespace std;

void PrintArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

void SelectionSort(int *A, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int IndexOfMin;
        IndexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] <= A[IndexOfMin])
            {
                IndexOfMin = j;
            }
        }
        int temp;
        temp = A[i];
        A[i] = A[IndexOfMin];
        A[IndexOfMin] = temp;
    }
}

int main()
{
    int A[] = {12, 4, 2, 1, 19, 6};
    cout << "Before running selection sort Elements: ";
    PrintArray(A, 6);

    cout << endl;

    cout << "After running selection sort Elements: ";
    SelectionSort(A, 6);
    PrintArray(A, 6);
}