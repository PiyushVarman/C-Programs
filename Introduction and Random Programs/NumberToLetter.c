#include <stdio.h>
#include <string.h>

int main() {
    char s[10];
    int x,y,i=0;
    scanf("%s",&s);
    y=strlen(s);
    for (i=0;i<y;i++){
        switch (s[i]){
            case '0':
                printf("zero ");
                break;
            case '1':
                printf("one ");
                break;
            case '2':
                printf("two ");
                break;
            case '3':
                printf("three ");
                break;
            case '4':
                printf("four ");
                break;
            case '5':
                printf("five ");
                break;
            case '6':
                printf("six ");
                break;
            case '7':
                printf("seven ");
                break;
            case '8':
                printf("eight ");
                break;
            case '9':
                printf("nine ");
                break;
        }   
    }
    return 0;
}
