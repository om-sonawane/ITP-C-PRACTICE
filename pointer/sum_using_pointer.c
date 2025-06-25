#include<stdio.h>
//Write a function to calculate sum and difference of two numbers using pointers.
void calculate(int *sum, int *diff, int a, int b) {
    *sum = a + b;   // Calculate sum
    *diff = a - b;  // Calculate difference
}
int main() {
    int a, b, sum, diff;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    // Call the function to calculate sum and difference
    calculate(&sum, &diff, a, b);
    
    // Output the results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    
    return 0;
}