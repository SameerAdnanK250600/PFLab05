#include <stdio.h>

int main() {
	int marks[3];
	
	printf("Enter 3 Marks: ");
	scanf("%d%d%d", &marks[0], &marks[1], &marks[2]);
	
	(marks[0] > marks[1] && marks[0] > marks[2]) ? printf("%d is greatest.", marks[0]) : ((marks[1] > marks[2] && marks[1] > marks[0]) ? printf("%d is greatest.", marks[1]) : ((marks[2] > marks[0] && marks[2] > marks[1]) ? printf("%d is greatest.", marks[2]) : printf("No greater found.")));	
	
	return 0;
}
