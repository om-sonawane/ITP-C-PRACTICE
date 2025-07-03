#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    // find min element in array

    printf("Enter 5 elements in the array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    int min = arr[0]; 
    for(i = 1; i < 5; i++) {    
        if(arr[i] < min) {
            min = arr[i]; 
        }
    }
    printf("Minimum element in the array is: %d\n", min);
    return 0;
}