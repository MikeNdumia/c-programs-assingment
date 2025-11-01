#include <stdio.h>

int main() {
    float height;
    double bankBalance;
    char phoneNumber[20]; 

    printf("Enter your height (in meters or centimeters): ");    scanf("%f", &height);

    printf("Enter your bank balance (in Kenya shillings): ");
    scanf("%lf", &bankBalance) ;

    printf("Enter your phone number:");
    scanf("%s", phoneNumber);

    printf("\n--- Your Details ---\n");
    printf("Height: %.2f\n", height);
    printf("Bank Balance: KSh %.2lf\n", bankBalance);
    printf("Phone Number: %s\n", phoneNumber);

    return 0;
}
