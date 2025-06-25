#include<stdio.h>
//Write a program to print the address and value of a variable using pointer.
int main() {
    int num = 42; // Example variable
    int *ptr = &num; // Pointer to the variable

    printf("Value of num: %d\n", num); // Print value of num
    printf("Address of num: %p\n",&ptr); // Print address of num
    printf("Value at ptr: %d\n", *ptr); // Print value at pointer
    printf("Address stored in ptr: %p\n", (void*)ptr); // Print address stored in ptr

    return 0;
}
