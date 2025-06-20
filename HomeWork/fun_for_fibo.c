#include<stdio.h>
void fibonacci(int n);
int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci sequence: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}