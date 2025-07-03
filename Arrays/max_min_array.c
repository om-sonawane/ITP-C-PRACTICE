//to finf out the maximum and minimum element in an 2d array
#include <stdio.h>
int main() {
    int arr[10][10];
    int i, j, m, n;
    int max, min;

    printf("Enter the number of rows and columns for the array: ");
    scanf("%d %d", &m, &n);
    
    printf("Enter elements of the array:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Initialize max and min with the first element
    max = min = arr[0][0];

    // Find max and min in the array
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }

    printf("Maximum element in the array: %d\n", max);
    printf("Minimum element in the array: %d\n", min);

    return 0;
}