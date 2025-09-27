#include <stdio.h>

int main() {
    float attendance;
    char midterm, fee;

    printf("Enter your attendance percentage: ");
    scanf("%f", &attendance);

    if (attendance < 75) {
        printf("You are NOT eligible (attendance less than 75%%).\n");
        return 0;
    }

    printf("Did you clear the midterm exam? (P for Pass / F for Fail): ");
    scanf(" %c", &midterm);

    switch (midterm) {
        case 'P':
        case 'p':
            break;
        case 'F':
        case 'f':
            printf("You are NOT eligible (failed midterm exam).\n");
            return 0;
        default:
            printf("Invalid input for midterm result.\n");
            return 0;
    }

    printf("Have you paid the exam fee? (Y for Yes / N for No): ");
    scanf(" %c", &fee);

    switch (fee) {
        case 'Y':
        case 'y':
            printf("You are eligible for the Final Exam.\n");
            break;
        case 'N':
        case 'n':
            printf("Please clear your dues to appear in the Final Exam.\n");
            break;
        default:
            printf("Invalid input for fee status.\n");
    }

    return 0;
}
