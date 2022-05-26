#include <stdio.h>
void Insertionsort(int A[], int n)
{
    int i, j, value;
    for (i = 1; i <= n - 1; i++)
    {
        value = A[i];
        j = i;
        while (A[j - 1] > value && j >= 1)
        {
            A[j] = A[j - 1];
            j--;
        }
        A[j] = value;
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
    Insertionsort(arr, size);
    printf("sorted array\n");
    printarray(arr, size);
    return 0;
}

// Input is array of numbers