#include<stdio.h>
//Write a program to demonstrate call by reference using pointers (e.g., swap two numbers).

#include <stdio.h>
void swapping(int, int);
int main()
{
    printf("enter two numbers to swap : ");
    int a, b;
    scanf("%d %d", &a, &b);
    swapping(a, b);// call by value 
    printf("\n inside Main Fucntion : a = %d , b = %d ", a, b);
    return 0;
}
void swapping(int a, int b) // int a = 10( from main ),int b = 20 ( from main)
{
    int temp = a;
    a = b;
    b = temp;
    printf("\ninside swapping Function : a = %d , b = %d ", a, b);
    
}