#include<stdio.h>
//write a function for calcaulating primenumber, palindrome , fibonacci menu driven 

void primenumber();
void palindrome();
void fibonacci();

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Check Prime Number\n");
        printf("2. Check Palindrome\n");
        printf("3. Generate Fibonacci Series\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                primenumber();
                break;
            case 2:
                palindrome();
                break;
            case 3:
                fibonacci();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    void primenumber(); {
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
    void palindrome(); {
        char str[100];
        int len = 0, flag = 1;

        printf("Enter a string to check if it is a palindrome: ");
        scanf("%s", str);

        while (str[len] != '\0') {
            len++;
        }

        for (int i = 0; i < len / 2; i++) {
            if (str[i] != str[len - i - 1]) {
                flag = 0; // Not a palindrome
                break;
            }
        }

        if (flag) {
            printf("The string '%s' is a palindrome.\n", str);
        } else {
            printf("The string '%s' is not a palindrome.\n", str);
        }
    }

    void fibonacci(); {
        int n, t1 = 0, t2 = 1, nextTerm;

        printf("Enter the number of terms for Fibonacci series: ");
        scanf("%d", &n);

        printf("Fibonacci Series: ");
        for (int i = 1; i <= n; ++i) {
            printf("%d, ", t1);
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("\n");
    }

    return 0;
}
 