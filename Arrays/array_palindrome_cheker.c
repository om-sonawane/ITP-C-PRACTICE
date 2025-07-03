//find palindrome number in elements of array
#include <stdio.h>
int main() {
    int arr[100], n, i, j, isPalindrome;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Palindrome numbers in the array are:\n");
    for(i = 0; i < n; i++) {
        int num = arr[i];
        isPalindrome = 1; // Assume it is a palindrome

        // Check if the number is a palindrome
        int reversed = 0, original = num;
        while(num > 0) {
            reversed = reversed * 10 + (num % 10);
            num /= 10;
        }

        if(reversed != original) {
            isPalindrome = 0; // Not a palindrome
        }

        if(isPalindrome) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}