// create a structure product and enter product name ,selling price ,cost price and display profit or loss
#include<stdio.h>
struct Product {
    char name[50];
    float sellingPrice;
    float costPrice;
};
int main() {
    struct Product product;
    
    // Input product details
    printf("Enter product name: ");
    scanf("%s", product.name);
    printf("Enter selling price: ");
    scanf("%f", &product.sellingPrice);
    printf("Enter cost price: ");
    scanf("%f", &product.costPrice);
    
    // Calculate profit or loss
    float profitOrLoss = product.sellingPrice - product.costPrice;
    
    // Display the result
    if (profitOrLoss > 0) {
        printf("Profit on %s: %.2f\n", product.name, profitOrLoss);
    } else if (profitOrLoss < 0) {
        printf("Loss on %s: %.2f\n", product.name, -profitOrLoss);
    } else {
        printf("No profit, no loss on %s.\n", product.name);
    }
    
    return 0;
}
