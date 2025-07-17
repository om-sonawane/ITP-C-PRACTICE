//print prime and fibo using pointer
#include <stdio.h>

int main ()
{
    int n, i, j, isPrime;
    int *ptr;

    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &n);

    // Allocate memory for Fibonacci series
    int fib[n];
    ptr = fib;

    // Generate Fibonacci series
    *ptr = 0; // First term
    *(ptr + 1) = 1; // Second term
    for (i = 2; i < n; i++) {
        *(ptr + i) = *(ptr + i - 1) + *(ptr + i - 2);
    }

    // Print Fibonacci series
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // Print prime numbers in the Fibonacci series
    printf("Prime numbers in the Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        isPrime = 1;
        if (*(ptr + i) < 2) {
            isPrime = 0;
        } else {
            for (j = 2; j <= *(ptr + i) / 2; j++) {
                if (*(ptr + i) % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime) {
            printf("%d ", *(ptr + i));
        }
    }
    
    return 0;
}