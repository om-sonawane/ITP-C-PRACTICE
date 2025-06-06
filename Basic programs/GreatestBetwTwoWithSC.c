#include<stdio.h>
int main()
{

int a, b,greatest;

printf("Enter two numbers");
scanf("%d%d",&a,&b);

switch (a>b)
{
case 1:
    greatest=a;
    break;
case 2:
    greatest=b;
    break;
}
printf("%d is the greatest",greatest);

return 0;

}