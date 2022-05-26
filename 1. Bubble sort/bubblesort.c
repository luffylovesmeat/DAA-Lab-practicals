#include <stdio.h>
void Bubblesort(int A[], int n)
{
    int pass, i;
    for (pass = n - 1; pass >= 0; pass--)
    {
        for (i = 0; i <= pass - 1; i++)
        {
            if (A[i] > A[i + 1])
            {
                // swap elements
                int temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
            }
        }
    }
}
void printarray(int p[], int size)
{
    int k;
    for (k = 0; k < size; k++)
        printf("%d ", p[k]);
    printf("\n");
}
int main()
{
    int arr[10];
    int size = 10, i;
    printf("Enter Array Elements\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d ", &arr[i]);
    }
    printf("given array elements\n");
    printarray(arr, size);
    Bubblesort(arr, size);
    printf("sorted array is\n");
    printarray(arr, size);
    return 0;
}

// Input is array of numbers