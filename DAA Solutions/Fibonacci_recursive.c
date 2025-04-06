//Write a C/C++ program to print Fibonacci series upto nth term using recursion 
//also compute the time complexity in terms of input size.

#include <stdio.h>
int complex = 0;
int fibonacciRecursive(int n)
{
    complex++;
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacciRecursive(i));
    }
    printf("\n");
    printf("The Complexity is: %d\n", complex);
    return 0;
}
