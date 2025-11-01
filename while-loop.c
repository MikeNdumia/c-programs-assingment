#include <stdio.h>

int main() {
    double balance, withdrawal;

    printf("Enter initial account balance: ");
    scanf("%lf", &balance);

    while(balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%lf", &withdrawal);

        balance -= withdrawal;

        if(balance > 0)
            printf("Remaining balance: %.2lf KES\n", balance);
        else
            printf("Balance is zero or negative. Transaction ended.\n");
    }

    return 0;
}
