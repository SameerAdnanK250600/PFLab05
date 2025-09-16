#include <stdio.h>

int main() {	
	int a, b;

	printf("Enter Num A: ");
	scanf("%d", &a);
	
	printf("Enter Num B: ");
	scanf("%d", &b);
	
	printf("Evaluating (a & b) | (a ^ b)\n");
	
	printf("(a & b) =  %d\n", (a&b));
	printf("(a ^ b) = %d\n", (a^b));
	printf("(a&b) | (a^b)) = %d\n", (a & b) | (a ^ b));
		
	return 0;
}
