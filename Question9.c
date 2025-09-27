#include <stdio.h>

int main() {
    int pin, enteredPin, amount;
    int balance = 5000;

    pin = 1234;
    printf("Enter your 4-digit PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin == pin) {
        printf("Enter withdrawal amount: ");
        scanf("%d", &amount);

        if (amount > balance) {
            printf("Insufficient Balance.\n");
        } else {
            balance -= amount;
            printf("Transaction successful!\n");
            printf("Remaining Balance: %d\n", balance);
        }
    } else {
        printf("Invalid PIN. Access Denied.\n");
    }

    return 0;
}
