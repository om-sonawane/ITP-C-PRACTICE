// reverse the number
#include <stdio.h>
int main()
{
    int  n, remiander;

    printf("Enter the number");
    scanf("%d", &n);

    while (n > 0)
    {
        remiander = n % 10;
        printf("%d", remiander);
        n = n / 10;
    }

    return 0;
}