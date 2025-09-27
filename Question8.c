#include <stdio.h>

int main() {
    int section, sizeChoice, typeChoice, quantity;
    float price = 0, total = 0, discount = 0;

    printf("Welcome to our Restaurant!\n");
    printf("1. Coffee Shop\n");
    printf("2. Burger Hub\n");
    printf("3. Ice Cream Parlour\n");
    printf("Enter your choice: ");
    scanf("%d", &section);

    switch (section) {
        case 1:
            printf("\nCoffee Shop Menu\n");
            printf("Choose coffee size:\n");
            printf("1. Small (Rs. 200)\n");
            printf("2. Medium (Rs. 300)\n");
            printf("3. Large (Rs. 400)\n");
            printf("Enter your choice: ");
            scanf("%d", &sizeChoice);

            price = (sizeChoice == 1) ? 200 :
                    (sizeChoice == 2) ? 300 :
                    (sizeChoice == 3) ? 400 : 0;

            if (price == 0) {
                printf("Invalid size choice.\n");
                return 0;
            }

            printf("How many coffees do you want? ");
            scanf("%d", &quantity);

            discount = (quantity > 1) ? 0.10 : 0;
            (quantity > 1) ? printf("Check our combo offers!\n") : printf("");

            printf("\nChoose coffee type:\n");
            printf("1. Regular\n");
            printf("2. Cappuccino\n");
            printf("3. Latte\n");
            printf("Enter your choice: ");
            scanf("%d", &typeChoice);

            total = price * quantity;
            total = (discount > 0) ? total - (total * discount) : total;

            printf("\nFinal Bill\n");
            printf("Coffee Size: %s\n",
                   (sizeChoice == 1) ? "Small" :
                   (sizeChoice == 2) ? "Medium" : "Large");
            printf("Coffee Type: %s\n",
                   (typeChoice == 1) ? "Regular" :
                   (typeChoice == 2) ? "Cappuccino" : "Latte");
            printf("Quantity: %d\n", quantity);
            (discount > 0) ? printf("Combo Discount: 10%% applied\n") : printf("");
            printf("Total: Rs. %.2f\n", total);
            break;

        case 2:
            printf("Your order will be handled by Burger Hub.\n");
            break;

        case 3:
            printf("Your order will be handled by Ice Cream Parlour.\n");
            break;

        default:
            printf("Invalid section choice.\n");
    }

    return 0;
}
