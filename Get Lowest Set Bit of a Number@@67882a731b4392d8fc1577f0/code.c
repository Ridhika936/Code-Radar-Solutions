#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("error");
        return 0;
    }
    int rightmost=n & -n;
    int position =0;
    while(right>1){
        right>>=1;
        position++;
    }
    printf("%d",position);
    return 0;

}