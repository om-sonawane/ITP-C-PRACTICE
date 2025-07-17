//print string with alternate characters
#include <stdio.h>
int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("String with alternate characters:\n");
    for (i = 0; str[i] != '\0'; i += 2) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}