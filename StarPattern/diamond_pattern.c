#include<stdio.h>
int main()
{
int i, j, n = 5;
    // Upper part of the diamond
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++) {
            printf(" "); // Print spaces
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*"); // Print stars
        }
        printf("\n");
    }
    
    // Lower part of the diamond
    for(i = n - 1; i >= 1; i--) {
        for(j = 1; j <= n - i; j++) {
            printf(" "); // Print spaces
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*"); // Print stars
        }
        printf("\n");
    }
    
    return 0;
}