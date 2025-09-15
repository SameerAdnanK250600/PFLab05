#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {
	int radius;
	
	
	printf("Enter Radius: ");
	scanf("%d", &radius);
	
	double sqradius = sqrt(radius);
	double area = M_PI * (pow(radius, 2));
	double circ = M_PI * 2 * radius;
	
	printf("Circumference is %lf, Area is %lf, Root of Radius is %lf", circ, area, sqradius);
	
	return 0;
}
