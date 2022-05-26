#include <stdio.h>
int recursiveBinarySearch(int array[], int start_index, int end_index, int element){
    if (end_index >= start_index){
        int middle = start_index + (end_index - start_index) / 2;
        if (array[middle] == element)
            return middle;
        if (array[middle] > element)
            return recursiveBinarySearch(array, start_index, middle - 1, element);
        return recursiveBinarySearch(array, middle + 1, end_index, element);
    }
    return -1;
}
int main(void){
    int i, k, element;
    // int array[] = {1, 4, 7, 9, 16, 56, 70};
    printf("Enter the size of array: ");
    scanf("%d", &k);
    int array[k];
    printf("Enter array elements: ");
    for (i = 0; i < k; i++)
    {
        scanf("%d", &array[i]);
    }
    // int element = 9;
    printf("Enter the Elements you want to search: ");
    scanf("%d", &element);
    int found_index = recursiveBinarySearch(array, 0, k - 1, element);
    if (found_index == -1){
        printf("Element not found in the array ");
    }
    else{
        printf("Element found at index: %d", found_index);
    }
    return 0;
}