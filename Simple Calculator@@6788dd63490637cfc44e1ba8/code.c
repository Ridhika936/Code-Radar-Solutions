#include <stdio.h>
int main(){
    float a,b;
    char ch;
    scanf("%f%f%c",&a,&b,&ch);
    switch(ch){
        case '+':
            printf("%.0f",a+b);
            break;
        case '-':
            printf("%.0f",a-b);
            break;
        case '*':
            printf("%.0f",a*b);
            break;
        case '/':
            printf("%.0f",a/b);
            break;
        default:
            printf("Error");
            break;
        }
        return 0;
}
