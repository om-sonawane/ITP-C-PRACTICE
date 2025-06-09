#include<stdio.h>
int main()
{
//show menu to user contaning 1>burger, 2>drinks, 3>pizza
//for burger->veg&nonveg->dishes
//for drinks ->juice&cold drink-->drinks
//for pizza -->veg&nonveg--->dishes
 
    int choice, subChoice;
    char burger = 1, drinks = 2, pizza = 3;


    printf("Welcome to the Restaurant Menu!\n");
    printf("Please select a category:\n");
    printf("1. Burger\n");
    printf("2. Drinks\n");
    printf("3. Pizza\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

switch (choice) {
  
    case 1: // Burger
        printf("You selected Burger. Please choose:\n");
        printf("1. Veg Burger\n");
        printf("2. Non-Veg Burger\n");
        printf("Enter your choice (1-2): ");
        scanf("%d", &subChoice);
       switch (subChoice) {
            case 1:
                printf(" choose dishes in Veg Burger.\n");
                printf("1. aloo tikii\n");
                printf("2. crispy veg \n");
                scanf("%d", &subChoice);
                switch (subChoice)
                {
                case 1:
                    printf("you have selected aloo tiki");
                    break;
                case 2:
                    printf("you have selected crispy veg");
                default:
                    break;
                }
                
                break;
            case 2:
                printf("You have selected Non-Veg Burger.\n");
                printf("1. fried chiken\n");
                printf("2. crispy non-veg \n");
                scanf("%d", &subChoice);
                switch (subChoice)
                {
                case 1:
                    printf("you have selected fried chiken");
                    break;
                case 2:
                    printf("you have selected crispy non-veg");
                default:
                    break;
                }
                break;
            default:
                printf("Invalid choice for Burger.\n");
        }
        break;
      

    case 2: // Drinks
        printf("You selected Drinks. Please choose:\n");
        printf("1. Juice\n");
        printf("2. Cold Drink\n");
        printf("Enter your choice (1-2): ");
        scanf("%d", &subChoice);
       switch (subChoice) {
            case 1:
                printf("You chose Juice.\n");
                printf("1. Orange Juice\n");
                printf("2. Apple Juice\n");
                printf("enter your choice (1-2): ");
                break;
                switch (subChoice)
                {
                case 1:
                    printf("You have selected Orange Juice.\n");
                    break;
                case 2:
                    printf("You have selected Apple Juice.\n");
                    break;
                default:
                    break;
                }
            case 2:
                printf("You chose Cold Drink.\n");
                break;
            default:
                printf("Invalid choice for Drinks.\n");
        }
        break;

    case 3: // Pizza
        printf("You selected Pizza. Please choose:\n");
        printf("1. Veg Pizza\n");
        printf("2. Non-Veg Pizza\n");
        printf("Enter your choice (1-2): ");
        scanf("%d", &subChoice);
       switch (subChoice) {
            case 1:
                printf("You chose Veg Pizza.\n");
                break;
            case 2:
                printf("You chose Non-Veg Pizza.\n");
                break;
            default:
                printf("Invalid choice for Pizza.\n");
        }
        break;
        default:
    
        printf("Invalid category choice.\n");
    }

    return 0;
}

