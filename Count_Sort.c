#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void PrintArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int maximum(int A[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

void CountSort(int A[], int n)
{
    int i, j;
    int max = maximum(A, n);
    int *count = (int *)calloc((max + 1), sizeof(int));

    for (i = 0; i < n; i++)
    {
        count[A[i]] = count[A[i]] + 1;
    }

    i = 0;
    j = 0;

    while (i <= max)
    {
        if (count[i] > 0)
        {
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    int n = 7;
    PrintArray(A, n);
    CountSort(A, n);
    PrintArray(A, n);
    return 0;
}