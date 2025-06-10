#include<stdio.h>
int main()
{

 int i, num;
printf("Enter a number");
scanf("%d",num);

for(i = 1; i <= num; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
        printf("C Language\n");
    } else if (i % 3 == 0) {
        printf("C\n");
    } else if (i % 5 == 0) {
        printf("Language\n");
    } else {
        printf("%d\n", i);
    }


    return 0;
    }
}