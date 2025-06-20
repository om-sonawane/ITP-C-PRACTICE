#include<stdio.h>

void multiplication();
int main() {
    printf("Welcome to the multiplication program!\n");
    multiplication();
    return 0;
}
void multiplication() {
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = a * b;
    printf("The multiplication of %d and %d is %d\n", a, b, c);
}