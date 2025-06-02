#include<stdio.h>
int main() {
   
    int a ;
    int b ;
    
    printf("\n Enter the value of a:=" );
    scanf("%d", &a);

    printf("\n Enter the value of b:=" );
    scanf("%d",&b);

    
    int Addition = a + b;
    int substraction = a - b;
    int multiplication = a * b; 
    int division = a / b;

    printf("The addition of %d and %d is %d\n", a, b, Addition);
    printf("The substraction of %d and %d is %d\n", a, b, substraction);
    printf("The multiplication of %d and %d is %d\n", a, b, multiplication);
    printf("The division of %d and %d is %d\n", a, b, division);

     return 0; 
}