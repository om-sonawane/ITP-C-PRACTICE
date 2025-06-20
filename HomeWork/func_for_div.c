#include<stdio.h>
void division();
int main() {
    printf("Welcome to the division program!\n");
    division();
    return 0;
}
void division() {
    int a, b;
    float c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (b != 0) {
        c = (float)a / b;
        printf("The division of %d by %d is %.2f\n", a, b, c);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}