#include <stdio.h>
int main(){
    int a,b;
    char ch;
    scanf("%d%d",&a,&b);
    switch(ch){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%d",a/b);
            break;
        default:
            printf("error");
        }
        return 0;
}