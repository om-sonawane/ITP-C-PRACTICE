#include <stdio.h>

int main() {
    int previousReading, currentReading, unitsConsumed;
    float ratePerUnit, totalBill;


    printf("Enter previous month reading: ");
    scanf("%d", &previousReading);

    printf("Enter current month reading: ");
    scanf("%d", &currentReading);

    printf("Enter rate per unit : ");
    scanf("%f", &ratePerUnit);

   
    unitsConsumed = currentReading - previousReading;

    
    totalBill = unitsConsumed * ratePerUnit;


    printf("\nElectricity Bill Calculation:\n");
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Rate per Unit: %.2f\n", ratePerUnit);
    printf("Total Bill: %.2f\n", totalBill);

    return 0;
}
