#include <stdio.h> 
 
void binary(int n) { 
    if (n > 1) { 
        binary(n / 2); 
    } 
    printf("%d", n % 2); 
} 
 
int main() { 
    int a, b; 
 
    printf("Enter Num A: "); 
    scanf("%d", &a); 
 
    printf("Enter Num B: "); 
    scanf("%d", &b); 
 
    printf("\nEvaluating (a & b) | (a ^ b)\n\n"); 
 
    int andRes = (a & b); 
    int xorRes = (a ^ b); 
    int finalRes = (a & b) | (a ^ b); 
 
    printf("(a & b) = %d\t(binary: ", andRes); 
    binary(andRes); 
    printf(")\n"); 
 
    printf("(a ^ b) = %d\t(binary: ", xorRes); 
    binary(xorRes); 
    printf(")\n"); 
 
    printf("(a & b) | (a ^ b) = %d\t(binary: ", finalRes); 
    binary(finalRes); 
    printf(")\n"); 
 
    return 0; 
}
