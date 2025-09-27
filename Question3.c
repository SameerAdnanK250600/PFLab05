#include <stdio.h>

int main(void) {
    int x, y, z;

    printf("Enter values for x, y, z: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("\nEvaluating for x=%d, y=%d, z=%d\n", x, y, z);

    int a = y * z;
    printf("1) y * z = %d * %d = %d\n", y, z, a);

    int b = x + a;
    printf("2) x + (y * z) = %d + %d = %d\n", x, a, b);

    int r1 = (b > 10);
    printf("3) (x + y*z) > 10 => %d > 10 => %d\n", b, r1);

    int lhs;
    if (!r1) {
        printf("4) Left operand of && is 0, so (x - z < y) is NOT evaluated (short-circuit).\n");
        lhs = 0;
    } else {
        int d = x - z;
        printf("4) x - z = %d - %d = %d\n", x, z, d);
        int r2 = (d < y);
        printf("5) (x - z) < y => %d < %d => %d\n", d, y, r2);
        lhs = r1 && r2;
        printf("6) ( (x + y*z) > 10 && (x - z) < y ) => %d && %d => %d\n", r1, r2, lhs);
    }

    int result;
    if (lhs) {
        printf("7) Left-hand side of || is 1, so !(y %% z) is NOT evaluated (short-circuit).\n");
        result = 1;
    } else {
        int mod = y % z;
        printf("7) y %% z = %d %% %d = %d\n", y, z, mod);
        int r3 = !mod;
        printf("8) !(y %% z) => !%d => %d\n", mod, r3);
        result = lhs || r3;
    }

    printf("\nFinal result (0 or 1): %d\n", result);
    return 0;
}
