#include <stdio.h>
int main(){
    float a,b;
    char ch;
    scanf("%f%f",&a,&b);
    switch(ch){
        case '+':
            printf("%f",a+b);
            break;
        case '-':
            printf("%f",a-b);
            break;
        case '*':
            printf("%f",a*b);
            break;
        case '/':
            if(b!=0){
                printf("%.2f",a/b);
            }
                else{
                printf("error");
            }
            break;
        default:
            printf("error");
            break;
        }
        return 0;
}
