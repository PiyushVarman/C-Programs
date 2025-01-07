#include <stdio.h>

int main() {
    int x,i=0,q=1;
    scanf("%d",&x);
    for (i=1;i<=x;i++){
        int j=0;
        for (j=0;j<i;j++){
            printf("%d ",q);
            q+=1;
        }
        printf("\n");
    }
    return 0;
}
