//WRITE A FUNCTION FOR PRIME NUMBERS
#include<stdio.h>
void primenumber() {
    int num, i, isPrime = 1;        
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);  
    if (num <= 1) {
        isPrime = 0; // 0 and 1 are not prime numbers
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a divisor, not prime
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
}
int main() {
    primenumber();
    return 0;
}