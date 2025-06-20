//find the sum of odd n:
#include<stdio.h>
int main();

int i,num,sum;

int main() {
    printf("Enter the number of odd numbers to sum: ");
    scanf("%d", &num);
    
    for ( i = 0; i < num; i++)
    {
        if (num % 2 != 0) {
            sum =sum+num;
        }
        num++;
    }
    printf("The sum of the odd numbers is: %d\n", sum);
    
    return 0;

}