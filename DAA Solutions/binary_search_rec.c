//Recursive Write a C/C++ program to perform binary search on 
//an array of size N and compute time complexity for size N.

#include <stdio.h>
int complex = 0;
int binarySearch(int arr[], int left, int right, int key)
{
    complex++;
    if (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            return binarySearch(arr, left, mid - 1, key);
        }
        else
        {
            return binarySearch(arr, mid + 1, right, key);
        }
    }
    return -1;
}
int main()
{
    int n, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the sorted elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1)
    {
        printf("Element found at index %d\n", result);
    }
    else
    {
        printf("Element not found in the array\n");
    }
    printf("The Complexity is: %d\n", complex);
    return 0;
}
