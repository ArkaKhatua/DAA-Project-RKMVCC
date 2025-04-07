// Write a C/C++ program using linear search to search an element in
// an array also compute time complexity for an input of size N.

#include <stdio.h>
int complex = 0;
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        complex++;
        if (arr[i] == key)
        {
            return i;
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
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int result = linearSearch(arr, n, key);
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
