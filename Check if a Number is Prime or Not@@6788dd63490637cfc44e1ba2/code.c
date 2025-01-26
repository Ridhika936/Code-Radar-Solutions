#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int a=0;
    for(i=2;i<=x-1,i++){
        if(n%2==0){
            a=1;
            break;
        }
    }
    if(x==1){
        printf("Not Prime");
    }
    else if(a==0){
        printf("Prime");
    }
    return 0;
}