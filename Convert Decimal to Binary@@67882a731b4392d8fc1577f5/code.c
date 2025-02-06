#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("0");
    }
    else{
        int firstbit=0;
        for(int i=31;i>=0;i--){
        int bit = (n>>i) & 1;
        if(bit==1||firstbit){
            printf("%d",bit);
            firstbit=1;
        }
    }
    }
        return 0;
    }