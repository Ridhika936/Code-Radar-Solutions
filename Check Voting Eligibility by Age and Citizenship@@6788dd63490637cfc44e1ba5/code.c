#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>=18 && (b==Y || b==y)){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}