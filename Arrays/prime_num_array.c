#include<stdio.h>
int main()
//prime number using array
{
    int num, i, j, isPrime;
    int primes[100]; 
    int count = 0; 

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime numbers between 1 and %d are:\n", num);

    
    for(i = 2; i <= num; i++) {
        isPrime = 1; 

        
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0;  
                break;
            }
        }

        if(isPrime) {
            primes[count++] = i; 
        }
    }


    for(i = 0; i < count; i++) {
        printf("%d ", primes[i]);
    }
    
    printf("\n");
    return 0;
}