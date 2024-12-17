#include <stdio.h>
int main(){
    int x;
    int count=0;
    int fac=0;
    int i;
    printf("Enter the number to check if it is prime:");
    scanf("%d",&x);
    for (i=1;i<x+1;i++){
        if (x%i==0){
            fac++;}
    }
    if (fac==2){
        printf("The number %d is a prime number",x);}
    else {
        printf("The number %d is a composite number",x);}
    return 0;
}
