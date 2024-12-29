// C Program to illustrate how to find the area of a square using macros
#include <stdio.h>
#define area(a) a*a

int area;
int main()
{
	int a;
    printf("Enter the side of the square:");
    scanf("%d",&a);
	printf("The area of the square is:%d",area(a));
	return 0;
}

