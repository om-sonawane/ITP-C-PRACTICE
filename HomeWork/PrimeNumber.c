//code for prime number

#include <stdio.h>

int main() {
    int num, i, j, isPrime;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime numbers between 1 and %d are:\n", num);

    // Loop from 2 to num (1 is not a prime)
    for(i = 2; i <= num; i++) {
        isPrime = 1;  // Assume current number is prime

        // Check if i is divisible by any number from 2 to i/2
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0;  // Not a prime
                break;
            }
        }

        if(isPrime) {
            printf("%d ", i);  // Print prime number
        }
    }

    printf("\n");
    return 0;
}
