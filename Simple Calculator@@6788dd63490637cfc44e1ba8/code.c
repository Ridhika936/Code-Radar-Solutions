#include <stdio.h>
int main(){
    float a,b;
    char ch;
    scanf("%f%f",&a,&b);
    scanf("%c",&ch);
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
            printf("%.2f",(float)a/b);
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