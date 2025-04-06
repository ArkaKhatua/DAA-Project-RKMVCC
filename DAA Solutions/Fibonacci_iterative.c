// Write a C/C++ program to print Fibonacci series upto nth term using iteration also compute time complexity.

#include <stdio.h>
int complex = 0;
void fibonacciIterative(int n)
{
    int a = 0, b = 1, next;
    printf("Fibonacci Series: %d %d ", a, b);
    complex += 2;
    for (int i = 2; i < n; i++)
    {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
        complex += 3;
    }
    printf("\n");
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
    fibonacciIterative(n);
    printf("The Complexity is: %d\n", complex);
    return 0;
}
