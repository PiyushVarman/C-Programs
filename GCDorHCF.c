// Online C compiler to run C program online
#include <stdio.h>

int main() {
    printf("Enter the number:");
    int x, y, z, hcf=0, highest=0, i;
    scanf("%d %d %d",&x,&y,&z);
    highest=(x>y ? x:y)>z? (x>y ? x:y):z;
    for (i=1;i<=highest;i++){
        if (x%i==0 && y%i==0 && z%i==0){
            if (i>hcf){
                hcf=i;
            }
        }
    }
    
    printf("The GCD/HCF of the numbers %d,%d and %d is %d",x,y,z,hcf);

    return 0;
}
