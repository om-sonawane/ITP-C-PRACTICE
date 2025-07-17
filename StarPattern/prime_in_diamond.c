#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return 0;
    return 1;
}

// Function to get the next prime number
int nextPrime(int current) {
    current++;
    while (!isPrime(current))
        current++;
    return current;
}

int main() {
    int n; 
    printf("Enter number of rows for top diamond: ");
    scanf("%d", &n);

    int prime = 1;  

    // Top half of diamond
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int s = 0; s < n - i; s++)
            printf("  ");  // 2 spaces for alignment

        // Print primes
        for (int j = 0; j < i; j++) {
            prime = nextPrime(prime);
            printf("%3d ", prime);
        }
        printf("\n");
    }

    // Bottom half of diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int s = 0; s < n - i; s++)
            printf("  ");

        // Print primes
        for (int j = 0; j < i; j++) {
            prime = nextPrime(prime);
            printf("%3d ", prime);
        }
        printf("\n");
    }

    return 0;
}
