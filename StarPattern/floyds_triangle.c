#include<stdio.h>
int main()
{
int i,j;
int num=1 ;
int n;
printf("Enter the number of rows: ");   
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%d ",num);
        num++;
    }
    printf("\n");
}
return 0;
}