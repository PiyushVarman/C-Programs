#include <stdio.h>

int main(){
    int i=1,j=1,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    for (i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    printf("\n");

    for (i=n;i>0;i--){
        for (j=i;j>0;j--){
            printf("* ");
        }
    printf("\n");
    }

    printf("\n");

    for (i=n;i>0;i--){
        for (j=i;j>0;j--){
            printf("%d ",j);
        }
    printf("\n");
    }
    return 0;
}
