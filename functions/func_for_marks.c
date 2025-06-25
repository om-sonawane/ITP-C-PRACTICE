#include<stdio.h>
//Write a function that takes marks in 5 subjects and returns total and percentage.

int main() {
    int marks[5];
    int total;
    float percentage;

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    calculate_marks(marks, &total, &percentage);

    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}

void calculate_marks(int marks[], int *total, float *percentage) {
    *total = 0;
    for (int i = 0; i < 5; i++) {
        *total += marks[i];
    }
    *percentage = (*total / 500.0) * 100; // Assuming each subject is out of 100
}