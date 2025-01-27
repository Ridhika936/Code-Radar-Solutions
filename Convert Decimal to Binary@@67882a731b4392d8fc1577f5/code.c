#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x==0){
        return 0;
    }
    while(x>0){
        printf("%d",x & 1);
        x=x>>1;
}
        return 0;
}
