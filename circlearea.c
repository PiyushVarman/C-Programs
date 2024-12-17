// C Program to illustrate how to find the area
#include <stdio.h>
#define PI 3.14159265359

int area;
int main()
{
	int radius=21;
	area=PI*radius*radius;
	printf("The area of the circle of radius r=%d cm is: %d",radius,area);
	return 0;
}

