#include<stdio.h>
int main()
{
int num ,factorial =1;
printf("enter the interger");
scanf("%d",&num);

for(int i =1;i<=num;i++){
    factorial=factorial*i;
}

printf("factorial of %d= %d",num,factorial);

return 0;

}