#include<stdio.h>
int main()
{
//div by 3&5 print c language
//div by 3 print c
//div by 5 print language

int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("C Language\n");
    } else if (num % 3 == 0) {
        printf("C\n");
    } else if (num % 5 == 0) {
        printf("Language\n");
    } else {
        printf("%d is not divisible by 3 or 5.\n", num);
    }

    return 0;
}