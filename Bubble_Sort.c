#include <stdio.h>
#include <stdlib.h>

void traverse(int *A, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n\n");
}

void BubbleSort(int *A, int size)
{
    int temp;
    for (int i = 0; i < (size - 1); i++)
    {

        printf("Working on pass number %d\n", i + 1);
        for (int j = 0; j < (size - 1); j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

void BubbleSortAdaptive(int *A, int size)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < (size - 1); i++)
    {
        isSorted = 1;
        printf("Working on pass number %d\n", i + 1);
        for (int j = 0; j < (size - 1 - i); j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{
    int A[] = {23, 56, 3, 2, 86, 33, 99};
    int n = 7;
    printf("Before Sorting : ");
    traverse(A, n);

    BubbleSort(A, n);
    printf("After Sorting : ");
    traverse(A, n);

    // printf("Already sorted Array\n");
    // int B[] = {1, 2, 3, 4, 5, 6};
    // int n2 = 6;
    // BubbleSortAdaptive(B, n2);
    // traverse(B, n2);
}