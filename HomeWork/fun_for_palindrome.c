#include<stdio.h>
void palindrome(char str[]);
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    palindrome(str);
    return 0;
}   
void palindrome(char str[]) {
    int len = 0, flag = 1;
    while (str[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag) {
        printf("The string '%s' is a palindrome.\n", str);
    } else {
        printf("The string '%s' is not a palindrome.\n", str);
    }
}