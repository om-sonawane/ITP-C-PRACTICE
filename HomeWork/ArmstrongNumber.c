// Armstrong Number code

#include <stdio.h>
int main()

{
    int num;
    printf("Enter three digit Number:-");
    scanf("%d", &num);

    int original = num, sum = 0, digit;

    while (num != 0)
    {
        digit = num % 10;             // for Getting the last digit
        sum += digit * digit * digit; // Cube the digit and add to sum
        num /= 10;                    // removing the last number
    }
    if (sum == original)
    {
        printf("%d is an Armstrong number.\n", original);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}