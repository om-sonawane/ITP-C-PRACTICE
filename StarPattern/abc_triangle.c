#include<stdio.h>
int main()
{
    //Print the alphabet triangle 
    /*  A  
        B C  
        D E F  
        G H I J  
        K L M N O*/ 

    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    char ch = 'A'; // Start with character 'A'
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c ", ch); // Print the current character followed by a space
            ch++; // Move to the next character
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0; // Return 0 to indicate successful execution
}