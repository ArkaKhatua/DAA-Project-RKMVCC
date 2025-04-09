#include <stdio.h>
int complex = 0;
void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
        complex++;
    }

    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[mid + 1 + j];
        complex++;
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        complex++;
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
        complex++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
        complex++;
    }
}
void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        complex++;
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    mergeSort(arr, 0, n - 1);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("The Complexity is: %d\n", complex);
    return 0;
}
