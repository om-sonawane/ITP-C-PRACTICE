//take two 2d arrays and save their sum in third array
#include <stdio.h>
int main() {
    int arr[10][10], brr[10][10], crr[10][10];
    int i, j;
    int m, n;

    printf("Enter the number of rows and columns for the arrays: ");
    scanf("%d %d", &m, &n);
    printf("Enter elements of first array:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter elements of second array:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &brr[i][j]);
        }
    }

    // Calculate the sum of the two arrays
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            crr[i][j] = arr[i][j] + brr[i][j];
        }
    }
    // Print the resulting array
    printf("Sum of the two arrays:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", crr[i][j]);
        }
        printf("\n");
    }

    return 0;
}