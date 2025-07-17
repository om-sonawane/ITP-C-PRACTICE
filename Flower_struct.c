//create a program to display the detail of n flowers with the following details:
//1) flowerId
//2)flowerName
//3)flowePrice
//4)flowerColor
//task- Display the detail of flowers
//display the flower detail with heighest price

#include <stdio.h>
#define MAX_FLOWERS 100

struct Flower_struct
{
    int flowerId;
    char flowerName[50];
    float flowerPrice;
    char flowerColor[20];
};

int main()
{
    struct Flower_struct s[MAX_FLOWERS];
    int n, i;
    float maxPrice = 0.0;
    int maxIndex = -1;

    printf("Enter the number of flowers: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter details for flower %d:\n", i + 1);
        printf("Flower ID: ");
        scanf("%d", &s[i].flowerId);
        printf("Flower Name: ");
        scanf("%s", s[i].flowerName);
        printf("Flower Price: ");
        scanf("%f", &s[i].flowerPrice);       
        printf("Flower Color: ");
        scanf("%s", s[i].flowerColor);

        // Check for highest price
        if (s[i].flowerPrice > maxPrice)
        {
            maxPrice = s[i].flowerPrice;
            maxIndex = i;
        }
    }

    // Display all flower details
    printf("\nFlower Details:\n");
    for (i = 0; i < n; i++)
    {
        printf("Flower ID: %d, Name: %s, Price: %.2f, Color: %s\n",
               s[i].flowerId, s[i].flowerName,
               s[i].flowerPrice, s[i].flowerColor);
    }

    // Display the flower with the highest price
    if (maxIndex != -1)
    {
        printf("\nFlower with the highest price:\n");
        printf("Flower ID: %d, Name: %s, Price: %.2f, Color: %s\n",
              s[maxIndex].flowerId, s[maxIndex].flowerName,
              s[maxIndex].flowerPrice,s[maxIndex].flowerColor);
    }

    return 0;          
}
