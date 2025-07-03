#include<stdio.h>
int main() {
    int arr[5] ;
    int i;
// find max element in array

    printf("Enter 5 elements in the array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0]; 
    for(i = 1; i < 5; i++) {    
        if(arr[i] > max) {
            max = arr[i]; 
        }
    }
    printf("Maximum element in the array is: %d\n", max);
    return 0;
}