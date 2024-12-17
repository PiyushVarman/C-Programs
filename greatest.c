#include <stdio.h>

int main(){
    int x, y, z;
    printf("Enter the three numbers:");
    scanf("%d %d %d",&x,&y,&z);
    if (x>y && x>z){
        printf("The greatest number is: %d",x);
        }
    else if (y>z && y>x){
        printf("The greatest number is: %d",y);
        }
    else {
        printf("The greatest number is: %d",z);
        }
    return 0;
    }
