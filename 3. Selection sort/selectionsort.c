#include <stdio.h>
void Selectionsort(int A[], int n)
{
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (A[j] < A[min])
                min = j;
        }
        // swap elements
        temp = A[min];
        A[min] = A[i];
        A[i] = temp;
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
    // input array {15,5,24,8,1,3,16,10,20};
    int arr[10], i;
    int size = 10;
    printf("\nEnter array elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    printf("given array\n");
    printarray(arr, size);
    Selectionsort(arr, size);
    printf("sorted array\n");
    printarray(arr, size);
    return 0;
}

// Input is array of numbers