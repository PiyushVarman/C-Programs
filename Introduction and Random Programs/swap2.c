#include <stdio.h>

int main(){
    int a=5;
    int b=10;
    int c=a;
    a=b;
    b=c;
    printf("%d\n",a);
    printf("%d",b);
    return 0;
}
