#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>=90){
        printf("%c",A);
    }
    else if(ch>=80 && ch<90){
        printf("%c",B);
    }
    else if(ch>=70 && ch<80){
        printf("%c",C);
    }
    else if(ch>=60 && ch<70){
        printf("%c",D);
    }
    else{
        printf("%c",F);
    }
    retrurn 0;
}