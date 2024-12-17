#include <stdio.h>

int main(){
    int x, l, r, i, j, s=0;
    printf("Enter the 5-digit number to be reversed: ");
    scanf("%d",&x);
    for (i=0;i<5;i++){
        l=x%10;  // Last digit of the number
        r=l;   // Storing the last digit to a temporary variable
        for (j=1;j<(5-i);j++){
            r=r*10; // Multiplying the temporary digit by 10 (Changing the "place value")
        }
        s=s+r; // Adding all the digits 
        x=x/10; // Deleting the last digit from the number
    }
    printf("%d",s);
    return 0;
}