#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;
    float *ptr1, *ptr2, *res;

    ptr1 = &num1;
    ptr2 = &num2;
    res = &result;

    do {
        printf("\n--- Menu ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", ptr1, ptr2);
        }

        switch(choice) {
            case 1:
                *res = *ptr1 + *ptr2;
                printf("Result = %.2f\n", *res);
                break;
            case 2:
                *res = *ptr1 - *ptr2;
                printf("Result = %.2f\n", *res);
                break;
            case 3:
                *res = *ptr1 * *ptr2;
                printf("Result = %.2f\n", *res);
                break;
            case 4:
                if (*ptr2 != 0) {
                    *res = *ptr1 / *ptr2;
                    printf("Result = %.2f\n", *res);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 5);

    return 0;
}