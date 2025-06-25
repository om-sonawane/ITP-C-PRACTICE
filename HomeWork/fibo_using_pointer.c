#include<stdio.h>
int main(){
    int n, n1=0,n2=1,nextterm,i;
    int *ptr1 = &n1, *ptr2 = &n2, *ptr3 = &nextterm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 0; i < n; ++i) {
        printf("%d ", *ptr1);
        *ptr3 = *ptr1 + *ptr2; // f3 = n1 + n2
        *ptr1 = *ptr2;         // n1 = n2   
        *ptr2 = *ptr3;         // n2 = f3
    }

    printf("\n");
    return 0;
}