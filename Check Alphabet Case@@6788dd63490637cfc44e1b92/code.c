#include <stdio.h>
int main(){
    int ch;
    scanf("%c",&ch);
    if(ch>=A && ch<=Z){
        printf("Uppercase");
    }
    if(ch>=a && ch<=z){
        printf("Lowercase");
    }
    return 0;
}