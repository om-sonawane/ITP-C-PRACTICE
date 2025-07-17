//menu driven program to insert elements into array of size n
// and display the elements of the array

#include <stdio.h>
int main()
{
    int n, i, choice;
    int arr[100]; // Array to hold elements
    int size = 0; // Current size of the array

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    do {
        printf("\nMenu:\n");
        printf("1. Insert Element\n");
        printf("2. Display Elements\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (size < n) {
                    printf("Enter element to insert: ");
                    scanf("%d", &arr[size]);
                    size++;
                } else {
                    printf("Array is full. Cannot insert more elements.\n");
                }
                break;
            case 2:
                if (size == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Elements in the array: ");
                    for (i = 0; i < size; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;


}