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

    if(choice==1){
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        area_circle = 3.14 * radius * radius;
        printf("Area of Circle: %.2f\n", area_circle);
    }
    else if(choice==2){
        printf("Enter the length and width of the rectangle: ");
        scanf("%f %f", &length, &width);
        area_ractangle = length * width;
        printf("Area of Rectangle: %.2f\n", area_ractangle);
    }
    else if(choice==3){
        printf("Enter the side of the square: ");
        scanf("%f", &side);
        area_square = side * side;
        printf("Area of Square: %.2f\n", area_square);
    }
    else{
        printf("Invalid choice! Please select a valid option.\n");

    }
    return 0;
}