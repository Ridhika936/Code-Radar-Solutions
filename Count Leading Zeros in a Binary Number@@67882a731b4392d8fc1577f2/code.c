#include <stdio.h>
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    if(n==0){
        count=32;
    }
    else{
        for(int i=31;i>=0;i--){
            if((n>>i) & 1){
                break;
            }
            count++;
        }
    }
    printf("%d",count);
    return 0;
}