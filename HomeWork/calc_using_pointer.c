#include<stdio.h>
int main() {
  int addition();
  int subtraction();
  int multiplication();
  int division();
    int choice, result;
    int a, b;
    int *ptr1 = &a, *ptr2 = &b;
    printf("Enter first number: ");
    scanf("%d", ptr1);
    printf("Enter second number: ");
    scanf("%d", ptr2);
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n"); 
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            result = addition(*ptr1, *ptr2);
            printf("Result of addition: %d\n", result);
            break;
        case 2:
            result = subtraction(*ptr1, *ptr2);
            printf("Result of subtraction: %d\n", result);
            break;
        case 3:
            result = multiplication(*ptr1, *ptr2);
            printf("Result of multiplication: %d\n", result);
            break;
        case 4:
            if (*ptr2 != 0) {
                result = division(*ptr1, *ptr2);
                printf("Result of division: %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }
}
int addition(int a, int b) {
    return a + b;
}
int subtraction(int a, int b) {
    return a - b;
}
int multiplication(int a, int b) {
    return a * b;
}
int division(int a, int b) {
    return a / b;
}
