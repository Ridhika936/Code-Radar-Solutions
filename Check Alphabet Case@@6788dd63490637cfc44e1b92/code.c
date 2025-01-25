#include <stdio.h>
int main(){
    int ch;
    scanf("%c",&ch);
    if(ch>=A && ch<=Z){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}