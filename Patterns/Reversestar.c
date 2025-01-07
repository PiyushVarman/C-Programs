/*1        1
 12      21
 123    321
 1234  4321
 1234554321*/
  
#include <stdio.h>

int main() {
    int n,i,j,k;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        int j=0,k,l;
        for (j=1;j<=i;j++){
            printf("%d",j);
        }
        for (k=0;k<(2*(n-i));k++){
            printf(" ");
        }
        for (l=j-1;l>=1;l--){
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}
