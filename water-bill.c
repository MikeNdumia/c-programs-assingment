#include <stdio.h>

int main() {
    int units;
    double totalBill;

    printf("Enter water units consumed: ");
    scanf("%d", &units);

   
    if (units >= 0 && units <= 30) {
        totalBill = units * 20.0;
    } else if (units >= 31 && units <= 60) {
        totalBill = units * 25.0;
    } else if (units > 60) {
        totalBill = units * 30.0;
    } else {
        printf("Invalid number of units.\n");
        return 1; 
    }


    printf("Total water bill: %.2lf KES\n", totalBill);

    return 0;
}

