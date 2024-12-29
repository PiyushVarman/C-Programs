// Divisors of a number
#include <stdio.h>

int main(){
    int x, i;
    printf("Enter the number:");
    scanf("%d",&x);
    printf("The divisors of the number %d is:\n",x);
    for (i=1;i<=x;i++){
        if (x%i==0){
            printf("%d\n",i);
        }
    }
    return 0;
}

