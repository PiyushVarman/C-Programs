#include <stdio.h>

int main(){
    int x, og, s=0, n, i;
    printf("Enter the number to be checked for:");
    scanf("%d",&x);
    og=x;
    for (i=0;i<3;i++){
        n=x%10;
        x=x/10;
        s+=(n*n*n);
    }
    if (s==og){
        printf("The number %d is an armstrong number.",og);
    }
    else {
        printf("The number %d is not an armstrong number.",og);
    }
    return 0;
}
