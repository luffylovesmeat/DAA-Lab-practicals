#include <stdio.h>
#include <conio.h>
int fun(int a[], int, int);
int main()
{
    int i, j, n, d, r;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d", &d);
    r = fun(arr, n, d);
    printf("Element found at location %d", r);
    return 0;
}
// iterative binary search algorithm
int fun(int A[], int p, int data)
{
    int low = 0;
    int high = p - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (A[mid] == data)
            return mid;
        else if (A[mid] < data)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}