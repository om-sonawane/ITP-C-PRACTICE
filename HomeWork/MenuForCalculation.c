#include<stdio.h>
int main()
{
//display menu to user
//1,choice for area of circle
//2,choice for area of rectangle
//3,choice for area of square

    int choice ;
    float radius, area_circle,length,width,area_ractangle,side,area_square;
    printf("Choose an option:\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Square\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice); 

        switch (choice) 
        {
        case 1:
            printf("You chose Area of Circle.\n");
            printf("Enter the radius of the circle: "); 
            scanf("%f", &radius);
            area_circle = 3.14 * radius * radius;
            printf("Area of the circle = %.2f\n", area_circle);
            break;
        case 2:
            printf("You chose Area of Rectangle.\n");
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area_ractangle = length * width;
            printf("Area of the rectangle = %.2f\n", area_ractangle);
            break;
        case 3:
            printf("You chose Area of Square.\n");
            printf("Enter the side of the square: ");
            scanf("%f", &side);
            area_square = side * side;
            printf("Area of the square = %.2f\n", area_square); 
            break;
        default:
            printf("Invalid choice. Please select a valid option.\n");
            break;
        }
    return 0;
}