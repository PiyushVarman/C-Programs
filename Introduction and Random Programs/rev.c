#include <stdio.h>
#include <math.h>

int main(){
	int x;
    int i;
    int ld;
    int s=0;
    int j;
    printf("Enter the number:\n");
	scanf("%d",&x);
    for (i=1;i<5;i++){
        printf("hhiiiiiiiiiiiiiii %d",i);
        ld=x%10;
        for (j=1;j<(5-i);j++){
            ld=ld*10;}
        s=s+ld;
        x=x/10;
        }
    printf("%d",s);
	return 0;
	}
