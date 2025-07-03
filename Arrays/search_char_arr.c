//take char from user and search it in array
#include<stdio.h>
int main() {
    char arr[100], ch;
    int i, found = 0;

    printf("Enter a string: ");
    fgets(arr, sizeof(arr), stdin); // Read a string from user input

    printf("Enter character to search: ");
    scanf(" %c", &ch); // Read a character to search

    for(i = 0; arr[i] != '\0'; i++) {
        if(arr[i] == ch) {
            found = 1;
            break; // Exit loop if character is found
        }
    }

    if(found) {
        printf("Character '%c' found at position %d.\n", ch, i + 1);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
    
}