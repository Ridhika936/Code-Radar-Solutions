#include <stdio.h>
int main(){
    int a;
    int count;
    scanf("%d",&a);
    if(a & 1){
        a>>=1;
        count++;
        printf("%d",count);
    }
    return 0;
}