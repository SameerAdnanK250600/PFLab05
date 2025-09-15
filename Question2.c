#include <stdio.h>

int main() {
	int input;
	
	printf("Enter Number: ");
	scanf("%d", &input);
	
	(input % 2) == 0 ? printf("Number is Even") : ((input % 3) == 0 ? printf("Divisible by 3") : printf("Odd and not Divisible by 3."));
	
	return 0;
}
