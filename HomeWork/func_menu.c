#include <stdio.h>
#define PI 3.14

// Function declarations
void menu();
void areaCircle();
void areaSquare();
void areaRectangle();

int main() {
    menu();  // Start the menu
    return 0;
}

// Menu function
void menu() {
    int choice;

    while (1) {
        printf("\nFunction Menu:\n");
        printf("1. Calculate the area of a circle\n");
        printf("2. Calculate the area of a square\n");
        printf("3. Calculate the area of a rectangle\n");
        printf("4. Exit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                areaCircle();
                break;
            case 2:
                areaSquare();
                break;
            case 3:
                areaRectangle();
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                return;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

// Area of Circle
void areaCircle() {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area of the circle = %.2f\n", area);
}

// Area of Square
void areaSquare() {
    float side, area;
    printf("Enter the side of the square: ");
    scanf("%f", &side);
    area = side * side;
    printf("Area of the square = %.2f\n", area);
}

// Area of Rectangle
void areaRectangle() {
    float length, breadth, area;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    area = length * breadth;
    printf("Area of the rectangle = %.2f\n", area);
}