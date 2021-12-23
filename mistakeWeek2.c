// supposed to produce the volume of a sphere as a double but is using ints. Fix this issue.
#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
	double radius;
	printf("Enter radius:");
	scanf("%lf", &radius);
	printf("volume is : %lf \n\n", 4 *radius*radius*radius/3 );
	return 0;
}