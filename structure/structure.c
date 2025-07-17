//create structure for for calculating profit and loss
#include <stdio.h>
struct ProfitLoss {
    float costPrice; // Cost price of the item
    float sellingPrice; // Selling price of the item
};
int main() {
    struct ProfitLoss item; // Declare a structure variable
    float profitOrLoss; // Variable to store profit or loss

    // Input cost price and selling price
    printf("Enter the cost price of the item: ");
    scanf("%f", &item.costPrice);
    printf("Enter the selling price of the item: ");
    scanf("%f", &item.sellingPrice);

    // Calculate profit or loss
    profitOrLoss = item.sellingPrice - item.costPrice;

    // Display result
    if (profitOrLoss > 0) {
        printf("Profit: %.2f\n", profitOrLoss);
    } else if (profitOrLoss < 0) {
        printf("Loss: %.2f\n", -profitOrLoss);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}