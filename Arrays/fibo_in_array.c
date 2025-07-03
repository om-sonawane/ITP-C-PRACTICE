//printing the fibo series in array //size if array==fibo(take from user)
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the size of the Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Size must be a positive integer.\n");
        return 1;
    }

    int fibo[n];
    fibo[0] = 0; // First Fibonacci number
    if (n > 1) {
        fibo[1] = 1; // Second Fibonacci number
    }

    for (i = 2; i < n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2]; // Calculate the next Fibonacci number
    }

    printf("Fibonacci series of size %d:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibo[i]);
    }
    printf("\n");

    return 0;
}