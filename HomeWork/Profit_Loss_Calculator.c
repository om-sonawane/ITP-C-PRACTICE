#include <stdio.h>

int main() {
    int actualPrice, sellingPrice;

  
    printf("Enter Actual Price: ");
    scanf("%d", &actualPrice);

    printf("Enter Selling Price: ");
    scanf("%d", &sellingPrice);

    if (sellingPrice == actualPrice) {
        printf("No profit nor Loss\n");
    }
    else if (sellingPrice > actualPrice) {
        printf("%d rupees Profit\n",(sellingPrice-actualPrice));
    }
    else {
        printf("%d rupees Loss\n", (actualPrice-sellingPrice));
    }

    return 0;
}
