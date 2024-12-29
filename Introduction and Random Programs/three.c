#include <stdio.h>

int main(){
	int x;
    printf("Enter a number: \n");
    scanf("%d",&x);
	if (x%3==0){
		printf("The number %d is divisible by 3",x);}
	else {
		printf("The number %d is not divisible by 3",x);}
	return 0;	
	}
