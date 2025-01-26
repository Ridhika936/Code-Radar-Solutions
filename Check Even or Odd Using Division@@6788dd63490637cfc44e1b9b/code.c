#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if((x/2)*2==x){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}