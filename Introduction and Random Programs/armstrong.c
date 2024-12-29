#include <stdio.h>

int main(){
    int x,og,z,s=0;
    printf("Enter a 3 digit number: ");
    scanf("%d",&x);
    og=x;
    while (x>0){
        z=x%10;
        s+=z*z*z;
        x=x/10;
    }
    if (s==og){
        printf("The number %d is an Armstrong number.",og);
    }
    else{
        printf("The number %d is NOT an Armstrong number.",og);
    }
    return 0;
}
