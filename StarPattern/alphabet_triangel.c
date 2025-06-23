#include<stdio.h>
int main(){

int i ,j ,n;
printf("Enter the number of rows: ");   
scanf("%d",&n);
// print alphabet triangle
for(i=0;i<n;i++)
{
    for(j=0;j<=i;j++)
    {
        printf("%c ",65+j);
        
    }
    printf("\n");
}



}